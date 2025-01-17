// SPDX-FileCopyrightText: 2020-present Open Networking Foundation <info@opennetworking.org>
//
// SPDX-License-Identifier: Apache-2.0

package testsmctypes

import (
	"encoding/hex"
	test_sm_ies "github.com/onosproject/onos-e2-sm/servicemodels/test_sm_aper_go_lib/v1/test-sm-ies"
	"github.com/onosproject/onos-lib-go/pkg/asn1/aper"
	"gotest.tools/assert"
	"testing"
)

func createTestOctetStringMsg() (*test_sm_ies.TestOctetString, error) {

	testOctetString := test_sm_ies.TestOctetString{
		AttrOs1: []byte{0x12, 0x34, 0x56, 0xA4},
		AttrOs2: []byte{0xFF, 0xFF},
		AttrOs3: []byte{0xFF, 0xFF, 0xBD, 0x4C},
		AttrOs4: []byte{0xAA, 0xBB, 0xCC},       // it doesn't like anything less than 3 bytes
		AttrOs5: []byte{0xDE, 0xC7, 0x23},       // It doesn't like anything less than 3 bytes again...
		AttrOs6: []byte{0x02, 0x4C, 0xF6, 0xAA}, // It doesn't like anything less than 3 bytes again... and again...
		AttrOs7: []byte{0x21, 0x44, 0xA8, 0xDF, 0x11},
	}

	return &testOctetString, nil
}

func createTestOctetStringExcludeOptional() (*test_sm_ies.TestOctetString, error) {

	testOctetString := test_sm_ies.TestOctetString{
		AttrOs1: []byte{0x12, 0x34, 0x56, 0xA4},
		AttrOs2: []byte{0xFF, 0xFF},
		AttrOs3: []byte{0xFF, 0xFF, 0xAA},
		AttrOs4: []byte{0xBC, 0x7D, 0xA1},             // It doesn't like anything less than 3 bytes...
		AttrOs5: []byte{0xDE, 0xC7, 0x23},             // It doesn't like anything less than 3 bytes again...
		AttrOs6: []byte{0x02, 0x31, 0xF6, 0x7D, 0x19}, // It doesn't like anything less than 3 bytes again... aand again...
		//AttrOs7: []byte{0x21, 0x44, 0xA8, 0xDF, 0x11},
	}

	return &testOctetString, nil
}

func Test_xerEncodingTestOctetString(t *testing.T) {

	testOctetString, err := createTestOctetStringMsg()
	assert.NilError(t, err, "Error creating TestOctetString PDU")

	xer, err := xerEncodeTestOctetString(testOctetString)
	assert.NilError(t, err)
	t.Logf("TestOctetString XER\n%s", string(xer))

	result, err := xerDecodeTestOctetString(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestOctetString XER - decoded\n%v", result)
	assert.DeepEqual(t, testOctetString.GetAttrOs1(), result.GetAttrOs1())
	assert.DeepEqual(t, testOctetString.GetAttrOs2(), result.GetAttrOs2())
	assert.DeepEqual(t, testOctetString.GetAttrOs3(), result.GetAttrOs3())
	assert.DeepEqual(t, testOctetString.GetAttrOs4(), result.GetAttrOs4())
	assert.DeepEqual(t, testOctetString.GetAttrOs5(), result.GetAttrOs5())
	assert.DeepEqual(t, testOctetString.GetAttrOs6(), result.GetAttrOs6())
	assert.DeepEqual(t, testOctetString.GetAttrOs7(), result.GetAttrOs7())

	testOctetStringExcludeOptional, err := createTestOctetStringExcludeOptional()
	assert.NilError(t, err, "Error creating TestOctetString PDU")

	xer2, err := xerEncodeTestOctetString(testOctetStringExcludeOptional)
	assert.NilError(t, err)
	t.Logf("TestOctetString XER\n%s", string(xer2))

	result2, err := xerDecodeTestOctetString(xer2)
	assert.NilError(t, err)
	assert.Assert(t, result2 != nil)
	t.Logf("TestOctetString XER - decoded\n%v", result2)
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs1(), result2.GetAttrOs1())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs2(), result2.GetAttrOs2())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs3(), result2.GetAttrOs3())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs4(), result2.GetAttrOs4())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs5(), result2.GetAttrOs5())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs6(), result2.GetAttrOs6())
}

func Test_perEncodingTestOctetString(t *testing.T) {

	testOctetString, err := createTestOctetStringMsg()
	assert.NilError(t, err, "Error creating TestOctetString PDU")

	per, err := PerEncodeTestOctetString(testOctetString)
	assert.NilError(t, err)
	t.Logf("TestOctetString PER\n%v", hex.Dump(per))

	// Generating APER bytes with Go APER lib
	perNew, err := aper.Marshal(testOctetString)
	assert.NilError(t, err)

	//Comparing bytes against each other
	assert.DeepEqual(t, per, perNew)

	result, err := PerDecodeTestOctetString(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestOctetString PER - decoded\n%v", result)
	assert.DeepEqual(t, testOctetString.GetAttrOs1(), result.GetAttrOs1())
	assert.DeepEqual(t, testOctetString.GetAttrOs2(), result.GetAttrOs2())
	assert.DeepEqual(t, testOctetString.GetAttrOs3(), result.GetAttrOs3())
	assert.DeepEqual(t, testOctetString.GetAttrOs4(), result.GetAttrOs4())
	assert.DeepEqual(t, testOctetString.GetAttrOs5(), result.GetAttrOs5())
	assert.DeepEqual(t, testOctetString.GetAttrOs6(), result.GetAttrOs6())
	assert.DeepEqual(t, testOctetString.GetAttrOs7(), result.GetAttrOs7())

	testOctetStringExcludeOptional, err := createTestOctetStringExcludeOptional()
	assert.NilError(t, err, "Error creating TestOctetString PDU")

	per2, err := PerEncodeTestOctetString(testOctetStringExcludeOptional)
	assert.NilError(t, err)
	t.Logf("TestOctetString PER\n%v", hex.Dump(per2))

	// Generating APER bytes with Go APER lib
	perNew2, err := aper.Marshal(testOctetStringExcludeOptional)
	assert.NilError(t, err)

	//Comparing bytes against each other
	assert.DeepEqual(t, per2, perNew2)

	result2, err := PerDecodeTestOctetString(per2)
	assert.NilError(t, err)
	assert.Assert(t, result2 != nil)
	t.Logf("TestOctetString PER - decoded\n%v", result2)
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs1(), result2.GetAttrOs1())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs2(), result2.GetAttrOs2())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs3(), result2.GetAttrOs3())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs4(), result2.GetAttrOs4())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs5(), result2.GetAttrOs5())
	assert.DeepEqual(t, testOctetStringExcludeOptional.GetAttrOs6(), result2.GetAttrOs6())
}
