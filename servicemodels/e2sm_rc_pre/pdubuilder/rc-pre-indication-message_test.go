// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: LicenseRef-ONF-Member-1.0

package pdubuilder

import (
	"encoding/hex"
	"github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/rcprectypes"
	e2sm_rc_pre_v2 "github.com/onosproject/onos-e2-sm/servicemodels/e2sm_rc_pre/v2/e2sm-rc-pre-v2"
	"gotest.tools/assert"
	"testing"
)

func TestE2SmRcPreIndicationMsg(t *testing.T) {
	var plmnID = "12f410"
	plmnIDBytes, _ := hex.DecodeString(plmnID)

	var pci int32 = 11

	neighbors := &e2sm_rc_pre_v2.Nrt{
		Cgi: &e2sm_rc_pre_v2.CellGlobalId{
			CellGlobalId: &e2sm_rc_pre_v2.CellGlobalId_EUtraCgi{
				EUtraCgi: &e2sm_rc_pre_v2.Eutracgi{
					PLmnIdentity: &e2sm_rc_pre_v2.PlmnIdentity{
						Value: plmnIDBytes,
					},
					EUtracellIdentity: &e2sm_rc_pre_v2.EutracellIdentity{
						Value: &e2sm_rc_pre_v2.BitString{
							Value: 0x9bcd4ac, //uint64
							Len:   28,        //uint32
						},
					},
				},
			},
		},
		Pci: &e2sm_rc_pre_v2.Pci{
			Value: 11,
		},
		CellSize: e2sm_rc_pre_v2.CellSize_CELL_SIZE_MACRO,
		DlArfcn:  CreateEArfcn(253),
	}

	cellSize := e2sm_rc_pre_v2.CellSize_CELL_SIZE_MACRO

	newE2SmRcPrePdu, err := CreateE2SmRcPreIndicationMsgFormat1(plmnIDBytes, CreateEArfcn(253), cellSize, pci, neighbors)
	assert.NilError(t, err)
	assert.Assert(t, newE2SmRcPrePdu != nil)

	xer, err := rcprectypes.XerEncodeE2SmRcPreIndicationMessage(newE2SmRcPrePdu)
	assert.NilError(t, err)
	t.Logf("XER Encoded Ind Message: %s", string(xer))

	per, err := rcprectypes.PerEncodeE2SmRcPreIndicationMessage(newE2SmRcPrePdu)
	assert.NilError(t, err)
	t.Logf("PER Encoded Ind Message: % x", per)

}
