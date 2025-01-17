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

func createTestNestedChoiceOpt1() *test_sm_ies.TestNestedChoice {

	testNestedChoice := test_sm_ies.TestNestedChoice{
		TestNestedChoice: &test_sm_ies.TestNestedChoice_Option1{
			Option1: &test_sm_ies.Choice3{
				Choice3: &test_sm_ies.Choice3_Choice3B{
					Choice3B: 153,
				},
			},
		},
	}

	return &testNestedChoice
}

func createTestNestedChoiceOpt2() *test_sm_ies.TestNestedChoice {

	testNestedChoice := test_sm_ies.TestNestedChoice{
		TestNestedChoice: &test_sm_ies.TestNestedChoice_Option2{
			Option2: &test_sm_ies.ConstrainedChoice3{
				ConstrainedChoice3: &test_sm_ies.ConstrainedChoice3_ConstrainedChoice3D{
					ConstrainedChoice3D: 11,
				},
			},
		},
	}

	return &testNestedChoice
}

func createTestNestedChoiceOpt3() *test_sm_ies.TestNestedChoice {

	testNestedChoice := test_sm_ies.TestNestedChoice{
		TestNestedChoice: &test_sm_ies.TestNestedChoice_Option3{
			Option3: &test_sm_ies.ConstrainedChoice4{
				ConstrainedChoice4: &test_sm_ies.ConstrainedChoice4_ConstrainedChoice4A{
					ConstrainedChoice4A: 138,
				},
			},
		},
	}

	return &testNestedChoice
}

func Test_xerEncodingTestNestedChoice(t *testing.T) {

	nestedChoiceOpt1 := createTestNestedChoiceOpt1()

	xer, err := xerEncodeTestNestedChoice(nestedChoiceOpt1)
	assert.NilError(t, err)
	t.Logf("TestNestedChoice (Option1) XER\n%s", string(xer))

	result, err := xerDecodeTestNestedChoice(xer)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestConstrainedChoices (Option1) XER - decoded\n%v", result)
	assert.Equal(t, nestedChoiceOpt1.GetOption1().GetChoice3B(), result.GetOption1().GetChoice3B())

	nestedChoiceOpt2 := createTestNestedChoiceOpt2()

	xer2, err := xerEncodeTestNestedChoice(nestedChoiceOpt2)
	assert.NilError(t, err)
	t.Logf("TestNestedChoice (Option2) XER\n%s", string(xer2))

	result2, err := xerDecodeTestNestedChoice(xer2)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestConstrainedChoices (Option2) XER - decoded\n%v", result2)
	assert.Equal(t, nestedChoiceOpt2.GetOption2().GetConstrainedChoice3D(), result2.GetOption2().GetConstrainedChoice3D())

	nestedChoiceOpt3 := createTestNestedChoiceOpt3()

	xer3, err := xerEncodeTestNestedChoice(nestedChoiceOpt3)
	assert.NilError(t, err)
	t.Logf("TestNestedChoice (Option3) XER\n%s", string(xer3))

	result3, err := xerDecodeTestNestedChoice(xer3)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestConstrainedChoices (Option3) XER - decoded\n%v", result3)
	assert.Equal(t, nestedChoiceOpt3.GetOption3().GetConstrainedChoice4A(), result3.GetOption3().GetConstrainedChoice4A())
}

func Test_perEncodingTestNestedChoice(t *testing.T) {

	nestedChoiceOpt1 := createTestNestedChoiceOpt1()

	per, err := PerEncodeTestNestedChoice(nestedChoiceOpt1)
	assert.NilError(t, err)
	t.Logf("TestNestedChoice (Option1) PER\n%v", hex.Dump(per))

	// Setting ChoiceMap to enable encoding with Go APER library (necessary prerequisite)
	aper.ChoiceMap = test_sm_ies.Choicemap
	// Generating APER bytes with Go APER lib
	perNew, err := aper.MarshalWithParams(nestedChoiceOpt1, "choiceExt")
	assert.NilError(t, err)

	//Comparing bytes against each other
	assert.DeepEqual(t, per, perNew)

	result, err := PerDecodeTestNestedChoice(per)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestNestedChoice (Option1) PER - decoded\n%v", result)
	assert.Equal(t, nestedChoiceOpt1.GetOption1().GetChoice3B(), result.GetOption1().GetChoice3B())

	nestedChoiceOpt2 := createTestNestedChoiceOpt2()

	per2, err := PerEncodeTestNestedChoice(nestedChoiceOpt2)
	assert.NilError(t, err)
	t.Logf("TestNestedChoice (Option2) PER\n%v", hex.Dump(per2))

	// Setting ChoiceMap to enable encoding with Go APER library (necessary prerequisite)
	aper.ChoiceMap = test_sm_ies.Choicemap
	// Generating APER bytes with Go APER lib
	perNew2, err := aper.MarshalWithParams(nestedChoiceOpt2, "choiceExt")
	assert.NilError(t, err)

	//Comparing bytes against each other
	assert.DeepEqual(t, per2, perNew2)

	result2, err := PerDecodeTestNestedChoice(per2)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestNestedChoice (Option2) PER - decoded\n%v", result2)
	assert.Equal(t, nestedChoiceOpt2.GetOption2().GetConstrainedChoice3D(), result2.GetOption2().GetConstrainedChoice3D())

	nestedChoiceOpt3 := createTestNestedChoiceOpt3()

	per3, err := PerEncodeTestNestedChoice(nestedChoiceOpt3)
	assert.NilError(t, err)
	t.Logf("TestNestedChoice (Option3) PER\n%v", hex.Dump(per3))

	// Setting ChoiceMap to enable encoding with Go APER library (necessary prerequisite)
	aper.ChoiceMap = test_sm_ies.Choicemap
	// Generating APER bytes with Go APER lib
	perNew3, err := aper.MarshalWithParams(nestedChoiceOpt3, "choiceExt")
	assert.NilError(t, err)

	//Comparing bytes against each other
	assert.DeepEqual(t, per3, perNew3)

	result3, err := PerDecodeTestNestedChoice(per3)
	assert.NilError(t, err)
	assert.Assert(t, result != nil)
	t.Logf("TestNestedChoice (Option3) PER - decoded\n%v", result3)
	assert.Equal(t, nestedChoiceOpt3.GetOption3().GetConstrainedChoice4A(), result3.GetOption3().GetConstrainedChoice4A())
}
