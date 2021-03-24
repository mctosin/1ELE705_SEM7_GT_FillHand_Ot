#pragma once
#ifndef AUX_FUNCTIONS_H
#define AUX_FUNCTIONS_H

#include <cstdint>

#include "pch.h"

template<size_t size>
::testing::AssertionResult ArraysMatch(const uint8_t(&expected)[size],
    const uint8_t(&actual)[size])
{
    for (size_t i(0); i < size; ++i)
    {
        if (expected[i] != actual[i])
        {
            return ::testing::AssertionFailure() <<
                "expected[" << i << "] ("
                << print_uint8_hex(expected[i]) <<
                ") != actual[" << i << "] ("
                << print_uint8_hex(actual[i]) << ")";
        }
    }

    return ::testing::AssertionSuccess();
}

template<size_t size>
::testing::AssertionResult ArraysMatch(const uint64_t(&expected)[size],
    const uint64_t(&actual)[size])
{
    for (size_t i(0); i < size; ++i)
    {
        if (expected[i] != actual[i])
        {
            return ::testing::AssertionFailure() <<
                "expected[" << i << "] ("
                << print_uint64_hex(expected[i]) <<
                ") != actual[" << i << "] ("
                << print_uint64_hex(actual[i]) << ")";
        }
    }

    return ::testing::AssertionSuccess();
}

template<size_t size>
::testing::AssertionResult ArraysMatch(const Card(&expected)[size],
    const Card(&actual)[size])
{
    for (size_t i(0); i < size; ++i)
    {
        if ((expected[i].face != actual[i].face) ||
            (expected[i].suit != actual[i].suit) ||
            (expected[i].face_number != actual[i].face_number) ||
            (expected[i].suit_number != actual[i].suit_number))
        {
            char erro[1024];
            sprintf(
                erro,
                "professor[%d] (face_number = %d, suit_number = %d)"
                " != aluno[%d] (face_number = %d, suit_number = %d)",
                (int)i, expected[i].face_number, expected[i].suit_number,
                (int)i, actual[i].face_number, actual[i].suit_number);
            return ::testing::AssertionFailure() << erro;
        }
    }

    return ::testing::AssertionSuccess();
}

::testing::AssertionResult ArraysMatch(const Card* expected,
    const Card* actual,
    size_t size)
{
    for (size_t i(0); i < size; ++i)
    {
        if ((expected[i].face != actual[i].face) ||
            (expected[i].suit != actual[i].suit) ||
            (expected[i].face_number != actual[i].face_number) ||
            (expected[i].suit_number != actual[i].suit_number))
        {
            char erro[1024];
            sprintf(
                erro,
                "professor[%d] (face_number = %d, suit_number = %d)"
                " != aluno[%d] (face_number = %d, suit_number = %d)",
                (int)i, expected[i].face_number, expected[i].suit_number,
                (int)i, actual[i].face_number, actual[i].suit_number);
            return ::testing::AssertionFailure() << erro;
        }
    }

    return ::testing::AssertionSuccess();
}


#endif // AUX_FUNCTIONS_H
