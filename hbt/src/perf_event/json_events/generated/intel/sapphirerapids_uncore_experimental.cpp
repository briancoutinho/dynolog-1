// Copyright (c) Meta Platforms, Inc. and affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the root directory of this source tree.

// Generated file. Do not modify.

#include <stdexcept>
#include "hbt/src/perf_event/json_events/generated/intel/JsonEvents.h"

namespace facebook::hbt::perf_event::generated {
namespace sapphirerapids_uncore_experimental {

void addEvents(PmuDeviceManager& pmu_manager) {
  /*
    Events from sapphirerapids_uncore_experimental.json (1976 experimental
    events).

    Supported SKUs:
        - Arch: x86, Model: SPR id: 143
  */
  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_EVENT_MSG.VLW_RCVD",
      EventDef::Encoding{.code = 0x42, .umask = 0x01, .msr_values = {0x00}},
      R"(Message Received : VLW)",
      R"(Message Received : VLW : Virtual Logical Wire (legacy) message were received from Uncore.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_EVENT_MSG.MSI_RCVD",
      EventDef::Encoding{.code = 0x42, .umask = 0x02, .msr_values = {0x00}},
      R"(Message Received : MSI)",
      R"(Message Received : MSI : Message Signaled Interrupts - interrupts sent by devices (including PCIe via IOxAPIC) (Socket Mode only))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_EVENT_MSG.IPI_RCVD",
      EventDef::Encoding{.code = 0x42, .umask = 0x04, .msr_values = {0x00}},
      R"(Message Received : IPI)",
      R"(Message Received : IPI : Inter Processor Interrupts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_EVENT_MSG.DOORBELL_RCVD",
      EventDef::Encoding{.code = 0x42, .umask = 0x08, .msr_values = {0x00}},
      R"(Message Received : Doorbell)",
      R"(Message Received : Doorbell)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_EVENT_MSG.INT_PRIO",
      EventDef::Encoding{.code = 0x42, .umask = 0x10, .msr_values = {0x00}},
      R"(Message Received : Interrupt)",
      R"(Message Received : Interrupt : Interrupts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_PHOLD_CYCLES.ASSERT_TO_ACK",
      EventDef::Encoding{.code = 0x45, .umask = 0x01, .msr_values = {0x00}},
      R"(Cycles PHOLD Assert to Ack : Assert to ACK)",
      R"(Cycles PHOLD Assert to Ack : Assert to ACK : PHOLD cycles.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_RACU_REQUESTS",
      EventDef::Encoding{.code = 0x46, .umask = 0x00, .msr_values = {0x00}},
      R"(RACU Request)",
      R"(RACU Request : Number outstanding register requests within message channel tracker)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_RACU_DRNG.RDRAND",
      EventDef::Encoding{.code = 0x4c, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_U_RACU_DRNG.RDRAND)",
      R"(UNC_U_RACU_DRNG.RDRAND)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_RACU_DRNG.RDSEED",
      EventDef::Encoding{.code = 0x4c, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_U_RACU_DRNG.RDSEED)",
      R"(UNC_U_RACU_DRNG.RDSEED)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_RACU_DRNG.PFTCH_BUF_EMPTY",
      EventDef::Encoding{.code = 0x4c, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_U_RACU_DRNG.PFTCH_BUF_EMPTY)",
      R"(UNC_U_RACU_DRNG.PFTCH_BUF_EMPTY)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC1.SLOW_I",
      EventDef::Encoding{.code = 0x1f, .umask = 0x01, .msr_values = {0x00}},
      R"(Misc Events - Set 1 : Slow Transfer of I Line)",
      R"(Misc Events - Set 1 : Slow Transfer of I Line : Snoop took cacheline ownership before write from data was committed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC1.SLOW_S",
      EventDef::Encoding{.code = 0x1f, .umask = 0x02, .msr_values = {0x00}},
      R"(Misc Events - Set 1 : Slow Transfer of S Line)",
      R"(Misc Events - Set 1 : Slow Transfer of S Line : Secondary received a transfer that did not have sufficient MESI state)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC1.SLOW_E",
      EventDef::Encoding{.code = 0x1f, .umask = 0x04, .msr_values = {0x00}},
      R"(Misc Events - Set 1 : Slow Transfer of E Line)",
      R"(Misc Events - Set 1 : Slow Transfer of E Line : Secondary received a transfer that did have sufficient MESI state)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC1.SLOW_M",
      EventDef::Encoding{.code = 0x1f, .umask = 0x08, .msr_values = {0x00}},
      R"(Misc Events - Set 1 : Slow Transfer of M Line)",
      R"(Misc Events - Set 1 : Slow Transfer of M Line : Snoop took cacheline ownership before write from data was committed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC1.SEC_RCVD_INVLD",
      EventDef::Encoding{.code = 0x1f, .umask = 0x20, .msr_values = {0x00}},
      R"(Misc Events - Set 1 : Received Invalid)",
      R"(Misc Events - Set 1 : Received Invalid : Secondary received a transfer that did not have sufficient MESI state)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC1.SEC_RCVD_VLD",
      EventDef::Encoding{.code = 0x1f, .umask = 0x40, .msr_values = {0x00}},
      R"(Misc Events - Set 1 : Received Valid)",
      R"(Misc Events - Set 1 : Received Valid : Secondary received a transfer that did have sufficient MESI state)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_IRP_ALL.OUTBOUND_INSERTS",
      EventDef::Encoding{.code = 0x20, .umask = 0x02, .msr_values = {0x00}},
      R"(: All Inserts Outbound (BL, AK, Snoops))",
      R"(: All Inserts Outbound (BL, AK, Snoops))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_IRP_ALL.EVICTS",
      EventDef::Encoding{.code = 0x20, .umask = 0x04, .msr_values = {0x00}},
      R"(: All Inserts Outbound (BL, AK, Snoops))",
      R"(: All Inserts Outbound (BL, AK, Snoops))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU0.MISSES",
      EventDef::Encoding{.code = 0x40, .umask = 0x20, .msr_values = {0x00}},
      R"(IOTLB Fills (same as IOTLB miss))",
      R"(IOTLB Fills (same as IOTLB miss) : When a transaction misses IOTLB, it does a page walk to look up memory and bring in the relevant page translation. Counts when this page translation is written to IOTLB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_PWT_OCCUPANCY",
      EventDef::Encoding{.code = 0x42, .umask = 0xff, .msr_values = {0x00}},
      R"(PWT occupancy.  Does not include 9th bit of occupancy (will undercount if PWT is greater than 255 per cycle).)",
      R"(PWT occupancy : Indicates how many page walks are outstanding at any point in time.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART0",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made by IIO Part0 to an IIO target)",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART1",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made by IIO Part0 to an IIO target)",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART2",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made by IIO Part0 to an IIO target)",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART3",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made by IIO Part0 to an IIO target)",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART4",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART5",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART6",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.PEER_WRITE.PART7",
      EventDef::Encoding{.code = 0x83, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Data requested of the CPU : Card writing to another Card (same or different stack) : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART0",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made to IIO Part0 by a different IIO unit)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART1",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made to IIO Part0 by a different IIO unit)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART2",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made to IIO Part0 by a different IIO unit)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART3",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Peer to peer write request of 4 bytes made to IIO Part0 by a different IIO unit)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART0",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Peer to peer read request for 4 bytes made by a different IIO unit to IIO Part0)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART1",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Peer to peer read request for 4 bytes made by a different IIO unit to IIO Part0)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART2",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Peer to peer read request for 4 bytes made by a different IIO unit to IIO Part0)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART3",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Peer to peer read request for 4 bytes made by a different IIO unit to IIO Part0)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART4",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART5",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART6",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_WRITE.PART7",
      EventDef::Encoding{.code = 0xc0, .umask = 0x02, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) writing to this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART4",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART5",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART6",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.PEER_READ.PART7",
      EventDef::Encoding{.code = 0xc0, .umask = 0x08, .msr_values = {0x00}},
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card.)",
      R"(Data requested by the CPU : Another card (different IIO stack) reading from this card. : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.RD_REG",
      EventDef::Encoding{.code = 0x05, .umask = 0xc1, .msr_values = {0x00}},
      R"(All DRAM read CAS commands issued (does not include underfills))",
      R"(DRAM RD_CAS and WR_CAS Commands. : DRAM RD_CAS commands w/out auto-pre : DRAM RD_CAS and WR_CAS Commands : Counts the total number or DRAM Read CAS commands issued on this channel.  This includes both regular RD CAS commands as well as those with implicit Precharge.   We do not filter based on major mode, as RD_CAS is not issued during WMM (with the exception of underfills).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.RD_UNDERFILL",
      EventDef::Encoding{.code = 0x05, .umask = 0xc4, .msr_values = {0x00}},
      R"(DRAM underfill read CAS commands issued)",
      R"(DRAM RD_CAS and WR_CAS Commands. : Underfill Read Issued : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.RD_PRE_REG",
      EventDef::Encoding{.code = 0x05, .umask = 0xc2, .msr_values = {0x00}},
      R"(DRAM RD_CAS and WR_CAS Commands.)",
      R"(DRAM RD_CAS and WR_CAS Commands. : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.RD_PRE_UNDERFILL",
      EventDef::Encoding{.code = 0x05, .umask = 0xc8, .msr_values = {0x00}},
      R"(DRAM RD_CAS and WR_CAS Commands.)",
      R"(DRAM RD_CAS and WR_CAS Commands. : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.WR_PRE",
      EventDef::Encoding{.code = 0x05, .umask = 0xe0, .msr_values = {0x00}},
      R"(DRAM RD_CAS and WR_CAS Commands.)",
      R"(DRAM RD_CAS and WR_CAS Commands. : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_INSERTS",
      EventDef::Encoding{.code = 0x17, .umask = 0x03, .msr_values = {0x00}},
      R"(Counts the number of inserts into the read buffer destined for DDR.  Does not count reads destined for PMEM.)",
      R"(Counts the number of inserts into the read buffer destined for DDR.  Does not count reads destined for PMEM.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_NOT_EMPTY",
      EventDef::Encoding{.code = 0x18, .umask = 0x03, .msr_values = {0x00}},
      R"(Counts the number of cycles where there's at least one element in the read buffer.  This includes reads to both DDR and PMEM.)",
      R"(Counts the number of cycles where there's at least one element in the read buffer.  This includes reads to both DDR and PMEM.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_FULL",
      EventDef::Encoding{.code = 0x19, .umask = 0x00, .msr_values = {0x00}},
      R"(Counts the number of cycles where the read buffer has greater than UMASK elements.  This includes reads to both DDR and PMEM.  NOTE: Umask must be set to the maximum number of elements in the queue (24 entries for SPR).)",
      R"(Counts the number of cycles where the read buffer has greater than UMASK elements.  This includes reads to both DDR and PMEM.  NOTE: Umask must be set to the maximum number of elements in the queue (24 entries for SPR).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_OCCUPANCY",
      EventDef::Encoding{.code = 0x1a, .umask = 0x00, .msr_values = {0x00}},
      R"(Counts the number of elements in the read buffer, including reads to both DDR and PMEM.)",
      R"(Counts the number of elements in the read buffer, including reads to both DDR and PMEM.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_SELF_REFRESH",
      EventDef::Encoding{.code = 0x43, .umask = 0x00, .msr_values = {0x00}},
      R"(Clock-Enabled Self-Refresh)",
      R"(Clock-Enabled Self-Refresh : Counts the number of cycles when the iMC is in self-refresh and the iMC still has a clock.  This happens in some package C-states.  For example, the PCU may ask the iMC to enter self-refresh even though some of the cores are still processing.  One use of this is for Monroe technology.  Self-refresh is required during package C3 and C6, but there is no clock in the iMC at this time, so it is not possible to count these cases.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_DRAM_PRE_ALL",
      EventDef::Encoding{.code = 0x44, .umask = 0x03, .msr_values = {0x00}},
      R"(DRAM Precharge All Commands)",
      R"(DRAM Precharge All Commands : Counts the number of times that the precharge all command was sent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CKE_CYCLES.LOW_0",
      EventDef::Encoding{.code = 0x47, .umask = 0x01, .msr_values = {0x00}},
      R"(CKE_ON_CYCLES by Rank : DIMM ID)",
      R"(CKE_ON_CYCLES by Rank : DIMM ID : Number of cycles spent in CKE ON mode.  The filter allows you to select a rank to monitor.  If multiple ranks are in CKE ON mode at one time, the counter will ONLY increment by one rather than doing accumulation.  Multiple counters will need to be used to track multiple ranks simultaneously.  There is no distinction between the different CKE modes (APD, PPDS, PPDF).  This can be determined based on the system programming.  These events should commonly be used with Invert to get the number of cycles in power saving mode.  Edge Detect is also useful here.  Make sure that you do NOT use Invert with Edge Detect (this just confuses the system and is not necessary).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CKE_CYCLES.LOW_1",
      EventDef::Encoding{.code = 0x47, .umask = 0x02, .msr_values = {0x00}},
      R"(CKE_ON_CYCLES by Rank : DIMM ID)",
      R"(CKE_ON_CYCLES by Rank : DIMM ID : Number of cycles spent in CKE ON mode.  The filter allows you to select a rank to monitor.  If multiple ranks are in CKE ON mode at one time, the counter will ONLY increment by one rather than doing accumulation.  Multiple counters will need to be used to track multiple ranks simultaneously.  There is no distinction between the different CKE modes (APD, PPDS, PPDF).  This can be determined based on the system programming.  These events should commonly be used with Invert to get the number of cycles in power saving mode.  Edge Detect is also useful here.  Make sure that you do NOT use Invert with Edge Detect (this just confuses the system and is not necessary).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CKE_CYCLES.LOW_2",
      EventDef::Encoding{.code = 0x47, .umask = 0x04, .msr_values = {0x00}},
      R"(CKE_ON_CYCLES by Rank : DIMM ID)",
      R"(CKE_ON_CYCLES by Rank : DIMM ID : Number of cycles spent in CKE ON mode.  The filter allows you to select a rank to monitor.  If multiple ranks are in CKE ON mode at one time, the counter will ONLY increment by one rather than doing accumulation.  Multiple counters will need to be used to track multiple ranks simultaneously.  There is no distinction between the different CKE modes (APD, PPDS, PPDF).  This can be determined based on the system programming.  These events should commonly be used with Invert to get the number of cycles in power saving mode.  Edge Detect is also useful here.  Make sure that you do NOT use Invert with Edge Detect (this just confuses the system and is not necessary).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CKE_CYCLES.LOW_3",
      EventDef::Encoding{.code = 0x47, .umask = 0x08, .msr_values = {0x00}},
      R"(CKE_ON_CYCLES by Rank : DIMM ID)",
      R"(CKE_ON_CYCLES by Rank : DIMM ID : Number of cycles spent in CKE ON mode.  The filter allows you to select a rank to monitor.  If multiple ranks are in CKE ON mode at one time, the counter will ONLY increment by one rather than doing accumulation.  Multiple counters will need to be used to track multiple ranks simultaneously.  There is no distinction between the different CKE modes (APD, PPDS, PPDF).  This can be determined based on the system programming.  These events should commonly be used with Invert to get the number of cycles in power saving mode.  Edge Detect is also useful here.  Make sure that you do NOT use Invert with Edge Detect (this just confuses the system and is not necessary).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CHANNEL_PPD",
      EventDef::Encoding{.code = 0x85, .umask = 0x00, .msr_values = {0x00}},
      R"(Channel PPD Cycles)",
      R"(Channel PPD Cycles : Number of cycles when all the ranks in the channel are in PPD mode.  If IBT=off is enabled, then this can be used to count those cycles.  If it is not enabled, then this can count the number of cycles when that could have been taken advantage of.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CRIT_THROTTLE_CYCLES.SLOT0",
      EventDef::Encoding{.code = 0x86, .umask = 0x01, .msr_values = {0x00}},
      R"(Throttle Cycles for Rank 0)",
      R"(Throttle Cycles for Rank 0 : Counts the number of cycles while the iMC is being throttled by either thermal constraints or by the PCU throttling.  It is not possible to distinguish between the two.  This can be filtered by rank.  If multiple ranks are selected and are being throttled at the same time, the counter will only increment by 1. : Thermal throttling is performed per DIMM.  We support 3 DIMMs per channel.  This ID allows us to filter by ID.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_POWER_CRIT_THROTTLE_CYCLES.SLOT1",
      EventDef::Encoding{.code = 0x86, .umask = 0x02, .msr_values = {0x00}},
      R"(Throttle Cycles for Rank 0)",
      R"(Throttle Cycles for Rank 0 : Counts the number of cycles while the iMC is being throttled by either thermal constraints or by the PCU throttling.  It is not possible to distinguish between the two.  This can be filtered by rank.  If multiple ranks are selected and are being throttled at the same time, the counter will only increment by 1.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PCLS.RD",
      EventDef::Encoding{.code = 0xa0, .umask = 0x05, .msr_values = {0x00}},
      R"(UNC_M_PCLS.RD)",
      R"(UNC_M_PCLS.RD)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PCLS.WR",
      EventDef::Encoding{.code = 0xa0, .umask = 0x0a, .msr_values = {0x00}},
      R"(UNC_M_PCLS.WR)",
      R"(UNC_M_PCLS.WR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PCLS.TOTAL",
      EventDef::Encoding{.code = 0xa0, .umask = 0x0f, .msr_values = {0x00}},
      R"(UNC_M_PCLS.TOTAL)",
      R"(UNC_M_PCLS.TOTAL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CYCLES_NE",
      EventDef::Encoding{.code = 0xd0, .umask = 0x00, .msr_values = {0x00}},
      R"(Scoreboard Cycles Not-Empty)",
      R"(Scoreboard Cycles Not-Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CYCLES_FULL",
      EventDef::Encoding{.code = 0xd1, .umask = 0x00, .msr_values = {0x00}},
      R"(Scoreboard Cycles Full)",
      R"(Scoreboard Cycles Full)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.ACCEPTS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x05, .msr_values = {0x00}},
      R"(Scoreboard accepts)",
      R"(Scoreboard accepts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.REJECTS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x0a, .msr_values = {0x00}},
      R"(Scoreboard rejects)",
      R"(Scoreboard rejects)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.RD_ACCEPTS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x01, .msr_values = {0x00}},
      R"(Scoreboard Accesses : Read Accepts)",
      R"(Scoreboard Accesses : Read Accepts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.RD_REJECTS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x02, .msr_values = {0x00}},
      R"(Scoreboard Accesses : Read Rejects)",
      R"(Scoreboard Accesses : Read Rejects)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.WR_ACCEPTS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x04, .msr_values = {0x00}},
      R"(Scoreboard Accesses : NM read completions)",
      R"(Scoreboard Accesses : NM read completions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.WR_REJECTS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x08, .msr_values = {0x00}},
      R"(Scoreboard Accesses : NM write completions)",
      R"(Scoreboard Accesses : NM write completions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.NM_RD_CMPS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x10, .msr_values = {0x00}},
      R"(Scoreboard Accesses : FM read completions)",
      R"(Scoreboard Accesses : FM read completions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.NM_WR_CMPS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x20, .msr_values = {0x00}},
      R"(Scoreboard Accesses : FM write completions)",
      R"(Scoreboard Accesses : FM write completions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.FM_RD_CMPS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x40, .msr_values = {0x00}},
      R"(Scoreboard Accesses : Write Accepts)",
      R"(Scoreboard Accesses : Write Accepts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_ACCESSES.FM_WR_CMPS",
      EventDef::Encoding{.code = 0xd2, .umask = 0x80, .msr_values = {0x00}},
      R"(Scoreboard Accesses : Write Rejects)",
      R"(Scoreboard Accesses : Write Rejects)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_REJECT.NM_SET_CNFLT",
      EventDef::Encoding{.code = 0xd4, .umask = 0x01, .msr_values = {0x00}},
      R"(Number of Scoreboard Requests Rejected : NM requests rejected due to set conflict)",
      R"(Number of Scoreboard Requests Rejected : NM requests rejected due to set conflict)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_REJECT.FM_ADDR_CNFLT",
      EventDef::Encoding{.code = 0xd4, .umask = 0x02, .msr_values = {0x00}},
      R"(Number of Scoreboard Requests Rejected : FM requests rejected due to full address conflict)",
      R"(Number of Scoreboard Requests Rejected : FM requests rejected due to full address conflict)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_REJECT.PATROL_SET_CNFLT",
      EventDef::Encoding{.code = 0xd4, .umask = 0x04, .msr_values = {0x00}},
      R"(Number of Scoreboard Requests Rejected : Patrol requests rejected due to set conflict)",
      R"(Number of Scoreboard Requests Rejected : Patrol requests rejected due to set conflict)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_REJECT.CANARY",
      EventDef::Encoding{.code = 0xd4, .umask = 0x08, .msr_values = {0x00}},
      R"(Number of Scoreboard Requests Rejected)",
      R"(Number of Scoreboard Requests Rejected)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_REJECT.DDR_EARLY_CMP",
      EventDef::Encoding{.code = 0xd4, .umask = 0x20, .msr_values = {0x00}},
      R"(Number of Scoreboard Requests Rejected)",
      R"(Number of Scoreboard Requests Rejected)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_OCCUPANCY.RDS",
      EventDef::Encoding{.code = 0xd5, .umask = 0x01, .msr_values = {0x00}},
      R"(Scoreboard Occupancy : Reads)",
      R"(Scoreboard Occupancy : Reads)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_OCCUPANCY.BLOCK_RDS",
      EventDef::Encoding{.code = 0xd5, .umask = 0x20, .msr_values = {0x00}},
      R"(Scoreboard Occupancy : Block region reads)",
      R"(Scoreboard Occupancy : Block region reads)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_OCCUPANCY.BLOCK_WRS",
      EventDef::Encoding{.code = 0xd5, .umask = 0x40, .msr_values = {0x00}},
      R"(Scoreboard Occupancy : Block region writes)",
      R"(Scoreboard Occupancy : Block region writes)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_INSERTS.RDS",
      EventDef::Encoding{.code = 0xd6, .umask = 0x01, .msr_values = {0x00}},
      R"(Scoreboard Inserts : Reads)",
      R"(Scoreboard Inserts : Reads)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_INSERTS.WRS",
      EventDef::Encoding{.code = 0xd6, .umask = 0x02, .msr_values = {0x00}},
      R"(Scoreboard Inserts : Writes)",
      R"(Scoreboard Inserts : Writes)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_INSERTS.BLOCK_RDS",
      EventDef::Encoding{.code = 0xd6, .umask = 0x10, .msr_values = {0x00}},
      R"(Scoreboard Inserts : Block region reads)",
      R"(Scoreboard Inserts : Block region reads)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_INSERTS.BLOCK_WRS",
      EventDef::Encoding{.code = 0xd6, .umask = 0x20, .msr_values = {0x00}},
      R"(Scoreboard Inserts : Block region writes)",
      R"(Scoreboard Inserts : Block region writes)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.ALLOC",
      EventDef::Encoding{.code = 0xd9, .umask = 0x01, .msr_values = {0x00}},
      R"(: Alloc)",
      R"(: Alloc)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.DEALLOC",
      EventDef::Encoding{.code = 0xd9, .umask = 0x02, .msr_values = {0x00}},
      R"(: Dealloc)",
      R"(: Dealloc)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.VLD",
      EventDef::Encoding{.code = 0xd9, .umask = 0x04, .msr_values = {0x00}},
      R"(: Reject)",
      R"(: Reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_PREF_INSERTS.ALL",
      EventDef::Encoding{.code = 0xda, .umask = 0x01, .msr_values = {0x00}},
      R"(Scoreboard Prefetch Inserts : All)",
      R"(Scoreboard Prefetch Inserts : All)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_PREF_OCCUPANCY.ALL",
      EventDef::Encoding{.code = 0xdb, .umask = 0x01, .msr_values = {0x00}},
      R"(Scoreboard Prefetch Occupancy : All)",
      R"(Scoreboard Prefetch Occupancy : All)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.NEW",
      EventDef::Encoding{.code = 0xdd, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.NEW)",
      R"(UNC_M_SB_TAGGED.NEW)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.RD_HIT",
      EventDef::Encoding{.code = 0xdd, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.RD_HIT)",
      R"(UNC_M_SB_TAGGED.RD_HIT)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.RD_MISS",
      EventDef::Encoding{.code = 0xdd, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.RD_MISS)",
      R"(UNC_M_SB_TAGGED.RD_MISS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.DDR4_CMP",
      EventDef::Encoding{.code = 0xdd, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.DDR4_CMP)",
      R"(UNC_M_SB_TAGGED.DDR4_CMP)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.OCC",
      EventDef::Encoding{.code = 0xdd, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.OCC)",
      R"(UNC_M_SB_TAGGED.OCC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_RxC_AD_INSERTS",
      EventDef::Encoding{.code = 0x02, .umask = 0x01, .msr_values = {0x00}},
      R"(AD Ingress (from CMS) : AD Ingress (from CMS) Allocations)",
      R"(AD Ingress (from CMS) : AD Ingress (from CMS) Allocations)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_RxC_AD_OCCUPANCY",
      EventDef::Encoding{.code = 0x03, .umask = 0x00, .msr_values = {0x00}},
      R"(AD Ingress (from CMS) Occupancy)",
      R"(AD Ingress (from CMS) Occupancy)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2CORE_NOT_TAKEN_DIRSTATE",
      EventDef::Encoding{.code = 0x17, .umask = 0x07, .msr_values = {0x00}},
      R"(Cycles when direct to core mode (which bypasses the CHA) was disabled)",
      R"(Cycles when direct to core mode (which bypasses the CHA) was disabled)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2CORE_TXN_OVERRIDE",
      EventDef::Encoding{.code = 0x18, .umask = 0x03, .msr_values = {0x00}},
      R"(Number of reads in which direct to core transaction were overridden)",
      R"(Number of reads in which direct to core transaction were overridden)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_TAKEN",
      EventDef::Encoding{.code = 0x19, .umask = 0x07, .msr_values = {0x00}},
      R"(Messages sent direct to the Intel UPI)",
      R"(Counts the number of times egress did D2K (Direct to KTI))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_NOT_TAKEN_DIRSTATE",
      EventDef::Encoding{.code = 0x1a, .umask = 0x07, .msr_values = {0x00}},
      R"(Cycles when direct to Intel UPI was disabled)",
      R"(Cycles when direct to Intel UPI was disabled)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_NOT_TAKEN_CREDITS",
      EventDef::Encoding{.code = 0x1b, .umask = 0x07, .msr_values = {0x00}},
      R"(Number of reads in which direct to Intel UPI transactions were overridden)",
      R"(Number of reads in which direct to Intel UPI transactions were overridden)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_TXN_OVERRIDE",
      EventDef::Encoding{.code = 0x1c, .umask = 0x03, .msr_values = {0x00}},
      R"(Number of reads that a message sent direct2 Intel UPI was overridden)",
      R"(Number of reads that a message sent direct2 Intel UPI was overridden)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.DIRTY_I",
      EventDef::Encoding{.code = 0x1d, .umask = 0x01, .msr_values = {0x00}},
      R"(Directory Hit : On Dirty Line in I State)",
      R"(Directory Hit : On Dirty Line in I State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.DIRTY_S",
      EventDef::Encoding{.code = 0x1d, .umask = 0x02, .msr_values = {0x00}},
      R"(Directory Hit : On Dirty Line in S State)",
      R"(Directory Hit : On Dirty Line in S State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.DIRTY_P",
      EventDef::Encoding{.code = 0x1d, .umask = 0x04, .msr_values = {0x00}},
      R"(Directory Hit : On Dirty Line in L State)",
      R"(Directory Hit : On Dirty Line in L State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.DIRTY_A",
      EventDef::Encoding{.code = 0x1d, .umask = 0x08, .msr_values = {0x00}},
      R"(Directory Hit : On Dirty Line in A State)",
      R"(Directory Hit : On Dirty Line in A State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.CLEAN_I",
      EventDef::Encoding{.code = 0x1d, .umask = 0x10, .msr_values = {0x00}},
      R"(Directory Hit : On NonDirty Line in I State)",
      R"(Directory Hit : On NonDirty Line in I State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.CLEAN_S",
      EventDef::Encoding{.code = 0x1d, .umask = 0x20, .msr_values = {0x00}},
      R"(Directory Hit : On NonDirty Line in S State)",
      R"(Directory Hit : On NonDirty Line in S State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.CLEAN_P",
      EventDef::Encoding{.code = 0x1d, .umask = 0x40, .msr_values = {0x00}},
      R"(Directory Hit : On NonDirty Line in L State)",
      R"(Directory Hit : On NonDirty Line in L State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_HIT.CLEAN_A",
      EventDef::Encoding{.code = 0x1d, .umask = 0x80, .msr_values = {0x00}},
      R"(Directory Hit : On NonDirty Line in A State)",
      R"(Directory Hit : On NonDirty Line in A State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.DIRTY_I",
      EventDef::Encoding{.code = 0x1e, .umask = 0x01, .msr_values = {0x00}},
      R"(Directory Miss : On Dirty Line in I State)",
      R"(Directory Miss : On Dirty Line in I State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.DIRTY_S",
      EventDef::Encoding{.code = 0x1e, .umask = 0x02, .msr_values = {0x00}},
      R"(Directory Miss : On Dirty Line in S State)",
      R"(Directory Miss : On Dirty Line in S State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.DIRTY_P",
      EventDef::Encoding{.code = 0x1e, .umask = 0x04, .msr_values = {0x00}},
      R"(Directory Miss : On Dirty Line in L State)",
      R"(Directory Miss : On Dirty Line in L State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.DIRTY_A",
      EventDef::Encoding{.code = 0x1e, .umask = 0x08, .msr_values = {0x00}},
      R"(Directory Miss : On Dirty Line in A State)",
      R"(Directory Miss : On Dirty Line in A State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.CLEAN_I",
      EventDef::Encoding{.code = 0x1e, .umask = 0x10, .msr_values = {0x00}},
      R"(Directory Miss : On NonDirty Line in I State)",
      R"(Directory Miss : On NonDirty Line in I State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.CLEAN_S",
      EventDef::Encoding{.code = 0x1e, .umask = 0x20, .msr_values = {0x00}},
      R"(Directory Miss : On NonDirty Line in S State)",
      R"(Directory Miss : On NonDirty Line in S State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.CLEAN_P",
      EventDef::Encoding{.code = 0x1e, .umask = 0x40, .msr_values = {0x00}},
      R"(Directory Miss : On NonDirty Line in L State)",
      R"(Directory Miss : On NonDirty Line in L State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_MISS.CLEAN_A",
      EventDef::Encoding{.code = 0x1e, .umask = 0x80, .msr_values = {0x00}},
      R"(Directory Miss : On NonDirty Line in A State)",
      R"(Directory Miss : On NonDirty Line in A State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.A2I",
      EventDef::Encoding{.code = 0x21, .umask = 0x20, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory update from A to I)",
      R"(Multi-socket cacheline Directory update from A to I)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.A2S",
      EventDef::Encoding{.code = 0x21, .umask = 0x40, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory update from A to S)",
      R"(Multi-socket cacheline Directory update from A to S)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.I2A",
      EventDef::Encoding{.code = 0x21, .umask = 0x04, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory update from I to A)",
      R"(Multi-socket cacheline Directory update from I to A)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.I2S",
      EventDef::Encoding{.code = 0x21, .umask = 0x02, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory update from I to S)",
      R"(Multi-socket cacheline Directory update from I to S)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.S2A",
      EventDef::Encoding{.code = 0x21, .umask = 0x10, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory update from S to A)",
      R"(Multi-socket cacheline Directory update from S to A)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.S2I",
      EventDef::Encoding{.code = 0x21, .umask = 0x08, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory update from S to I)",
      R"(Multi-socket cacheline Directory update from S to I)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0.TO_NM1LM",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0.TO_NM1LM)",
      R"(UNC_M2M_IMC_READS.CH0.TO_NM1LM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0.TO_NMCache",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0.TO_NMCache)",
      R"(UNC_M2M_IMC_READS.CH0.TO_NMCache)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1.TO_NM1LM",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1.TO_NM1LM)",
      R"(UNC_M2M_IMC_READS.CH1.TO_NM1LM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1.TO_NMCache",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1.TO_NMCache)",
      R"(UNC_M2M_IMC_READS.CH1.TO_NMCache)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.TO_NM1LM",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.TO_NM1LM)",
      R"(UNC_M2M_IMC_READS.TO_NM1LM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.TO_NMCACHE",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.TO_NMCACHE)",
      R"(UNC_M2M_IMC_READS.TO_NMCACHE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.ALL",
      EventDef::Encoding{.code = 0x24, .umask = 0x04, .msr_values = {0x00}},
      R"(Reads to iMC issued)",
      R"(Reads to iMC issued)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.NORMAL",
      EventDef::Encoding{.code = 0x24, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.NORMAL)",
      R"(UNC_M2M_IMC_READS.NORMAL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.NI",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive - All Channels)",
      R"(Non-Inclusive - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0.NI",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive - Ch0)",
      R"(Non-Inclusive - Ch0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1.NI",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive - Ch1)",
      R"(Non-Inclusive - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.ALL",
      EventDef::Encoding{.code = 0x25, .umask = 0x10, .msr_values = {0x00}},
      R"(All Writes - All Channels)",
      R"(All Writes - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.FULL",
      EventDef::Encoding{.code = 0x25, .umask = 0x01, .msr_values = {0x00}},
      R"(Full Non-ISOCH - All Channels)",
      R"(Full Non-ISOCH - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.PARTIAL",
      EventDef::Encoding{.code = 0x25, .umask = 0x02, .msr_values = {0x00}},
      R"(Partial Non-ISOCH - All Channels)",
      R"(Partial Non-ISOCH - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TGR_AD_CREDITS",
      EventDef::Encoding{.code = 0x2e, .umask = 0x00, .msr_values = {0x00}},
      R"(Number AD Ingress Credits)",
      R"(Number AD Ingress Credits)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TGR_BL_CREDITS",
      EventDef::Encoding{.code = 0x2f, .umask = 0x00, .msr_values = {0x00}},
      R"(Number BL Ingress Credits)",
      R"(Number BL Ingress Credits)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TRACKER_INSERTS.CH0",
      EventDef::Encoding{.code = 0x32, .umask = 0x04, .msr_values = {0x00}},
      R"(Tracker Inserts : Channel 0)",
      R"(Tracker Inserts : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TRACKER_INSERTS.CH1",
      EventDef::Encoding{.code = 0x32, .umask = 0x04, .msr_values = {0x00}},
      R"(Tracker Inserts : Channel 1)",
      R"(Tracker Inserts : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TRACKER_OCCUPANCY.CH0",
      EventDef::Encoding{.code = 0x33, .umask = 0x01, .msr_values = {0x00}},
      R"(Tracker Occupancy : Channel 0)",
      R"(Tracker Occupancy : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TRACKER_OCCUPANCY.CH1",
      EventDef::Encoding{.code = 0x33, .umask = 0x02, .msr_values = {0x00}},
      R"(Tracker Occupancy : Channel 1)",
      R"(Tracker Occupancy : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NE.CH0",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Tracker Cycles Not Empty : Channel 0)",
      R"(Write Tracker Cycles Not Empty : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NE.CH1",
      EventDef::Encoding{.code = 0x35, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Tracker Cycles Not Empty : Channel 1)",
      R"(Write Tracker Cycles Not Empty : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NE.MIRR",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(Write Tracker Cycles Not Empty : Mirror)",
      R"(Write Tracker Cycles Not Empty : Mirror)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NE.MIRR_NONTGR",
      EventDef::Encoding{.code = 0x35, .umask = 0x08, .msr_values = {0x00}},
      R"(Write Tracker Cycles Not Empty)",
      R"(Write Tracker Cycles Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NE.MIRR_PWR",
      EventDef::Encoding{.code = 0x35, .umask = 0x10, .msr_values = {0x00}},
      R"(Write Tracker Cycles Not Empty)",
      R"(Write Tracker Cycles Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WPQ_NO_REG_CRD.CHN0",
      EventDef::Encoding{.code = 0x37, .umask = 0x01, .msr_values = {0x00}},
      R"(M2M->iMC WPQ Cycles w/Credits - Regular : Channel 0)",
      R"(M2M->iMC WPQ Cycles w/Credits - Regular : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WPQ_NO_REG_CRD.CHN1",
      EventDef::Encoding{.code = 0x37, .umask = 0x02, .msr_values = {0x00}},
      R"(M2M->iMC WPQ Cycles w/Credits - Regular : Channel 1)",
      R"(M2M->iMC WPQ Cycles w/Credits - Regular : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WPQ_NO_SPEC_CRD.CHN0",
      EventDef::Encoding{.code = 0x38, .umask = 0x01, .msr_values = {0x00}},
      R"(M2M->iMC WPQ Cycles w/Credits - Special : Channel 0)",
      R"(M2M->iMC WPQ Cycles w/Credits - Special : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WPQ_NO_SPEC_CRD.CHN1",
      EventDef::Encoding{.code = 0x38, .umask = 0x02, .msr_values = {0x00}},
      R"(M2M->iMC WPQ Cycles w/Credits - Special : Channel 1)",
      R"(M2M->iMC WPQ Cycles w/Credits - Special : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_INSERTS.CH0",
      EventDef::Encoding{.code = 0x40, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Tracker Inserts : Channel 0)",
      R"(Write Tracker Inserts : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_INSERTS.CH1",
      EventDef::Encoding{.code = 0x40, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Tracker Inserts : Channel 1)",
      R"(Write Tracker Inserts : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WPQ_FLUSH.CH0",
      EventDef::Encoding{.code = 0x42, .umask = 0x01, .msr_values = {0x00}},
      R"(WPQ Flush : Channel 0)",
      R"(WPQ Flush : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WPQ_FLUSH.CH1",
      EventDef::Encoding{.code = 0x42, .umask = 0x02, .msr_values = {0x00}},
      R"(WPQ Flush : Channel 1)",
      R"(WPQ Flush : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_POSTED_OCCUPANCY.CH0",
      EventDef::Encoding{.code = 0x47, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Tracker Posted Occupancy : Channel 0)",
      R"(Write Tracker Posted Occupancy : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_POSTED_OCCUPANCY.CH1",
      EventDef::Encoding{.code = 0x47, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Tracker Posted Occupancy : Channel 1)",
      R"(Write Tracker Posted Occupancy : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_POSTED_INSERTS.CH0",
      EventDef::Encoding{.code = 0x48, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Tracker Posted Inserts : Channel 0)",
      R"(Write Tracker Posted Inserts : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_POSTED_INSERTS.CH1",
      EventDef::Encoding{.code = 0x48, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Tracker Posted Inserts : Channel 1)",
      R"(Write Tracker Posted Inserts : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2CORE_NOT_TAKEN_NOTFORKED",
      EventDef::Encoding{.code = 0x4a, .umask = 0x00, .msr_values = {0x00}},
      R"(Counts the time when FM didn't do d2c for fill reads (cross tile case))",
      R"(Counts the time when FM didn't do d2c for fill reads (cross tile case))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TAG_MISS",
      EventDef::Encoding{.code = 0x4b, .umask = 0x03, .msr_values = {0x00}},
      R"(UNC_M2M_TAG_MISS)",
      R"(UNC_M2M_TAG_MISS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NONPOSTED_OCCUPANCY.CH0",
      EventDef::Encoding{.code = 0x4c, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Tracker Non-Posted Occupancy : Channel 0)",
      R"(Write Tracker Non-Posted Occupancy : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NONPOSTED_OCCUPANCY.CH1",
      EventDef::Encoding{.code = 0x4c, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Tracker Non-Posted Occupancy : Channel 1)",
      R"(Write Tracker Non-Posted Occupancy : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NONPOSTED_INSERTS.CH0",
      EventDef::Encoding{.code = 0x4d, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Tracker Non-Posted Inserts : Channel 0)",
      R"(Write Tracker Non-Posted Inserts : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_WR_TRACKER_NONPOSTED_INSERTS.CH1",
      EventDef::Encoding{.code = 0x4d, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Tracker Non-Posted Inserts : Channel 1)",
      R"(Write Tracker Non-Posted Inserts : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_OCCUPANCY.CH0",
      EventDef::Encoding{.code = 0x54, .umask = 0x01, .msr_values = {0x00}},
      R"(Prefetch CAM Occupancy : Channel 0)",
      R"(Prefetch CAM Occupancy : Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_OCCUPANCY.CH1",
      EventDef::Encoding{.code = 0x54, .umask = 0x02, .msr_values = {0x00}},
      R"(Prefetch CAM Occupancy : Channel 1)",
      R"(Prefetch CAM Occupancy : Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_INSERTS.CH0_XPT",
      EventDef::Encoding{.code = 0x56, .umask = 0x01, .msr_values = {0x00}},
      R"(Prefetch CAM Inserts : XPT - Ch 0)",
      R"(Prefetch CAM Inserts : XPT - Ch 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_INSERTS.CH0_UPI",
      EventDef::Encoding{.code = 0x56, .umask = 0x02, .msr_values = {0x00}},
      R"(Prefetch CAM Inserts : UPI - Ch 0)",
      R"(Prefetch CAM Inserts : UPI - Ch 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_INSERTS.CH1_XPT",
      EventDef::Encoding{.code = 0x56, .umask = 0x04, .msr_values = {0x00}},
      R"(Prefetch CAM Inserts : XPT - Ch 1)",
      R"(Prefetch CAM Inserts : XPT - Ch 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_INSERTS.CH1_UPI",
      EventDef::Encoding{.code = 0x56, .umask = 0x08, .msr_values = {0x00}},
      R"(Prefetch CAM Inserts : UPI - Ch 1)",
      R"(Prefetch CAM Inserts : UPI - Ch 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_DROPS.CH0_XPT",
      EventDef::Encoding{.code = 0x58, .umask = 0x01, .msr_values = {0x00}},
      R"(Data Prefetches Dropped)",
      R"(Data Prefetches Dropped)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_DROPS.CH0_UPI",
      EventDef::Encoding{.code = 0x58, .umask = 0x02, .msr_values = {0x00}},
      R"(Data Prefetches Dropped)",
      R"(Data Prefetches Dropped)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_DROPS.CH1_XPT",
      EventDef::Encoding{.code = 0x58, .umask = 0x04, .msr_values = {0x00}},
      R"(Data Prefetches Dropped)",
      R"(Data Prefetches Dropped)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_DROPS.CH1_UPI",
      EventDef::Encoding{.code = 0x58, .umask = 0x08, .msr_values = {0x00}},
      R"(Data Prefetches Dropped)",
      R"(Data Prefetches Dropped)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_CIS_DROPS",
      EventDef::Encoding{.code = 0x5c, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_M2M_PREFCAM_CIS_DROPS)",
      R"(UNC_M2M_PREFCAM_CIS_DROPS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RxC_DEALLOCS.SQUASHED",
      EventDef::Encoding{.code = 0x62, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.SQUASHED)",
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.SQUASHED)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RxC_DEALLOCS.1LM_POSTED",
      EventDef::Encoding{.code = 0x62, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.1LM_POSTED)",
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.1LM_POSTED)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RxC_DEALLOCS.CIS",
      EventDef::Encoding{.code = 0x62, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.CIS)",
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.CIS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RESP_MISS.CH0",
      EventDef::Encoding{.code = 0x5f, .umask = 0x01, .msr_values = {0x00}},
      R"(: Channel 0)",
      R"(: Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RESP_MISS.CH1",
      EventDef::Encoding{.code = 0x5f, .umask = 0x02, .msr_values = {0x00}},
      R"(: Channel 1)",
      R"(: Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PREFETCH_SPAWN",
      EventDef::Encoding{.code = 0x29, .umask = 0x00, .msr_values = {0x00}},
      R"(FlowQ Generated Prefetch)",
      R"(FlowQ Generated Prefetch : Count cases where FlowQ causes spawn of Prefetch to iMC/SMI3 target)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_D2U_SENT",
      EventDef::Encoding{.code = 0x2a, .umask = 0x00, .msr_values = {0x00}},
      R"(D2U Sent)",
      R"(D2U Sent : Cases where SMI3 sends D2U command)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_D2C_SENT",
      EventDef::Encoding{.code = 0x2b, .umask = 0x00, .msr_values = {0x00}},
      R"(D2C Sent)",
      R"(D2C Sent : Count cases BL sends direct to core)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_CMS_CLOCKTICKS",
      EventDef::Encoding{.code = 0xc0, .umask = 0x00, .msr_values = {0x00}},
      R"(M3UPI CMS Clockticks)",
      R"(CMS Clockticks)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.SLOT0",
      EventDef::Encoding{.code = 0x02, .umask = 0x01, .msr_values = {0x00}},
      R"(Valid Flits Sent : Slot 0)",
      R"(Valid Flits Sent : Slot 0 : Shows legal flit time (hides impact of L0p and L0c). : Count Slot 0 - Other mask bits determine types of headers to count.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.SLOT1",
      EventDef::Encoding{.code = 0x02, .umask = 0x02, .msr_values = {0x00}},
      R"(Valid Flits Sent : Slot 1)",
      R"(Valid Flits Sent : Slot 1 : Shows legal flit time (hides impact of L0p and L0c). : Count Slot 1 - Other mask bits determine types of headers to count.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.SLOT2",
      EventDef::Encoding{.code = 0x02, .umask = 0x04, .msr_values = {0x00}},
      R"(Valid Flits Sent : Slot 2)",
      R"(Valid Flits Sent : Slot 2 : Shows legal flit time (hides impact of L0p and L0c). : Count Slot 2 - Other mask bits determine types of headers to count.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.DATA",
      EventDef::Encoding{.code = 0x02, .umask = 0x08, .msr_values = {0x00}},
      R"(Valid Flits Sent : Data)",
      R"(Valid Flits Sent : Data : Shows legal flit time (hides impact of L0p and L0c). : Count Data Flits (which consume all slots), but how much to count is based on Slot0-2 mask, so count can be 0-3 depending on which slots are enabled for counting..)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.LLCRD",
      EventDef::Encoding{.code = 0x02, .umask = 0x10, .msr_values = {0x00}},
      R"(Valid Flits Sent : LLCRD Not Empty)",
      R"(Valid Flits Sent : LLCRD Not Empty : Shows legal flit time (hides impact of L0p and L0c). : Enables counting of LLCRD (with non-zero payload). This only applies to slot 2 since LLCRD is only allowed in slot 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.NULL",
      EventDef::Encoding{.code = 0x02, .umask = 0x20, .msr_values = {0x00}},
      R"(Valid Flits Sent : Slot NULL or LLCRD Empty)",
      R"(Valid Flits Sent : Slot NULL or LLCRD Empty : Shows legal flit time (hides impact of L0p and L0c). : LLCRD with all zeros is treated as NULL. Slot 1 is not treated as NULL if slot 0 is a dual slot. This can apply to slot 0,1, or 2.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.LLCTRL",
      EventDef::Encoding{.code = 0x02, .umask = 0x40, .msr_values = {0x00}},
      R"(Valid Flits Sent : LLCTRL)",
      R"(Valid Flits Sent : LLCTRL : Shows legal flit time (hides impact of L0p and L0c). : Equivalent to an idle packet.  Enables counting of slot 0 LLCTRL messages.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.PROTHDR",
      EventDef::Encoding{.code = 0x02, .umask = 0x80, .msr_values = {0x00}},
      R"(Valid Flits Sent : Protocol Header)",
      R"(Valid Flits Sent : Protocol Header : Shows legal flit time (hides impact of L0p and L0c). : Enables count of protocol headers in slot 0,1,2 (depending on slot uMask bits))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.IDLE",
      EventDef::Encoding{.code = 0x02, .umask = 0x47, .msr_values = {0x00}},
      R"(Valid Flits Sent : Idle)",
      R"(Valid Flits Sent : Idle : Shows legal flit time (hides impact of L0p and L0c).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.SLOT0",
      EventDef::Encoding{.code = 0x03, .umask = 0x01, .msr_values = {0x00}},
      R"(Valid Flits Received : Slot 0)",
      R"(Valid Flits Received : Slot 0 : Shows legal flit time (hides impact of L0p and L0c). : Count Slot 0 - Other mask bits determine types of headers to count.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.SLOT1",
      EventDef::Encoding{.code = 0x03, .umask = 0x02, .msr_values = {0x00}},
      R"(Valid Flits Received : Slot 1)",
      R"(Valid Flits Received : Slot 1 : Shows legal flit time (hides impact of L0p and L0c). : Count Slot 1 - Other mask bits determine types of headers to count.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.SLOT2",
      EventDef::Encoding{.code = 0x03, .umask = 0x04, .msr_values = {0x00}},
      R"(Valid Flits Received : Slot 2)",
      R"(Valid Flits Received : Slot 2 : Shows legal flit time (hides impact of L0p and L0c). : Count Slot 2 - Other mask bits determine types of headers to count.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.DATA",
      EventDef::Encoding{.code = 0x03, .umask = 0x08, .msr_values = {0x00}},
      R"(Valid Flits Received : Data)",
      R"(Valid Flits Received : Data : Shows legal flit time (hides impact of L0p and L0c). : Count Data Flits (which consume all slots), but how much to count is based on Slot0-2 mask, so count can be 0-3 depending on which slots are enabled for counting..)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.LLCRD",
      EventDef::Encoding{.code = 0x03, .umask = 0x10, .msr_values = {0x00}},
      R"(Valid Flits Received : LLCRD Not Empty)",
      R"(Valid Flits Received : LLCRD Not Empty : Shows legal flit time (hides impact of L0p and L0c). : Enables counting of LLCRD (with non-zero payload). This only applies to slot 2 since LLCRD is only allowed in slot 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.NULL",
      EventDef::Encoding{.code = 0x03, .umask = 0x20, .msr_values = {0x00}},
      R"(Valid Flits Received : Slot NULL or LLCRD Empty)",
      R"(Valid Flits Received : Slot NULL or LLCRD Empty : Shows legal flit time (hides impact of L0p and L0c). : LLCRD with all zeros is treated as NULL. Slot 1 is not treated as NULL if slot 0 is a dual slot. This can apply to slot 0,1, or 2.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.LLCTRL",
      EventDef::Encoding{.code = 0x03, .umask = 0x40, .msr_values = {0x00}},
      R"(Valid Flits Received : LLCTRL)",
      R"(Valid Flits Received : LLCTRL : Shows legal flit time (hides impact of L0p and L0c). : Equivalent to an idle packet.  Enables counting of slot 0 LLCTRL messages.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.PROTHDR",
      EventDef::Encoding{.code = 0x03, .umask = 0x80, .msr_values = {0x00}},
      R"(Valid Flits Received : Protocol Header)",
      R"(Valid Flits Received : Protocol Header : Shows legal flit time (hides impact of L0p and L0c). : Enables count of protocol headers in slot 0,1,2 (depending on slot uMask bits))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_FLITS.IDLE",
      EventDef::Encoding{.code = 0x03, .umask = 0x47, .msr_values = {0x00}},
      R"(Valid Flits Received : Idle)",
      R"(Valid Flits Received : Idle : Shows legal flit time (hides impact of L0p and L0c).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_BASIC_HDR_MATCH.NCB",
      EventDef::Encoding{.code = 0x04, .umask = 0x0e, .msr_values = {0x00}},
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Bypass)",
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Bypass : Matches on Transmit path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_BASIC_HDR_MATCH.NCB_OPC",
      EventDef::Encoding{.code = 0x04, .umask = 0x0e, .msr_values = {0x00}},
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Bypass, Match Opcode)",
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Bypass, Match Opcode : Matches on Transmit path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_BASIC_HDR_MATCH.NCS",
      EventDef::Encoding{.code = 0x04, .umask = 0x0f, .msr_values = {0x00}},
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Standard)",
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Standard : Matches on Transmit path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_BASIC_HDR_MATCH.NCS_OPC",
      EventDef::Encoding{.code = 0x04, .umask = 0x0f, .msr_values = {0x00}},
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Standard, Match Opcode)",
      R"(Matches on Transmit path of a UPI Port : Non-Coherent Standard, Match Opcode : Matches on Transmit path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BASIC_HDR_MATCH.NCB",
      EventDef::Encoding{.code = 0x05, .umask = 0x0e, .msr_values = {0x00}},
      R"(Matches on Receive path of a UPI Port : Non-Coherent Bypass)",
      R"(Matches on Receive path of a UPI Port : Non-Coherent Bypass : Matches on Receive path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BASIC_HDR_MATCH.NCB_OPC",
      EventDef::Encoding{.code = 0x05, .umask = 0x0e, .msr_values = {0x00}},
      R"(Matches on Receive path of a UPI Port : Non-Coherent Bypass, Match Opcode)",
      R"(Matches on Receive path of a UPI Port : Non-Coherent Bypass, Match Opcode : Matches on Receive path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BASIC_HDR_MATCH.NCS",
      EventDef::Encoding{.code = 0x05, .umask = 0x0f, .msr_values = {0x00}},
      R"(Matches on Receive path of a UPI Port : Non-Coherent Standard)",
      R"(Matches on Receive path of a UPI Port : Non-Coherent Standard : Matches on Receive path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BASIC_HDR_MATCH.NCS_OPC",
      EventDef::Encoding{.code = 0x05, .umask = 0x0f, .msr_values = {0x00}},
      R"(Matches on Receive path of a UPI Port : Non-Coherent Standard, Match Opcode)",
      R"(Matches on Receive path of a UPI Port : Non-Coherent Standard, Match Opcode : Matches on Receive path of a UPI port.
Match based on UMask specific bits:
Z: Message Class (3-bit)
Y: Message Class Enable
W: Opcode (4-bit)
V: Opcode Enable
U: Local Enable
T: Remote Enable
S: Data Hdr Enable
R: Non-Data Hdr Enable
Q: Dual Slot Hdr Enable
P: Single Slot Hdr Enable
Link Layer control types are excluded (LL CTRL, slot NULL, LLCRD) even under specific opcode match_en cases.
Note: If Message Class is disabled, we expect opcode to also be disabled.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_CRC_LLR_REQ_TRANSMIT",
      EventDef::Encoding{.code = 0x08, .umask = 0x00, .msr_values = {0x00}},
      R"(LLR Requests Sent)",
      R"(LLR Requests Sent : Number of LLR Requests were transmitted.  This should generally be <= the number of CRC errors detected.  If multiple errors are detected before the Rx side receives a LLC_REQ_ACK from the Tx side, there is no need to send more LLR_REQ_NACKs..)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_CRC_ERRORS",
      EventDef::Encoding{.code = 0x0b, .umask = 0x00, .msr_values = {0x00}},
      R"(CRC Errors Detected)",
      R"(CRC Errors Detected : Number of CRC errors detected in the UPI Agent.  Each UPI flit incorporates 8 bits of CRC for error detection.  This counts the number of flits where the CRC was able to detect an error.  After an error has been detected, the UPI agent will send a request to the transmitting socket to resend the flit (as well as any flits that came after it).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_DIRECT_ATTEMPTS.D2C",
      EventDef::Encoding{.code = 0x12, .umask = 0x01, .msr_values = {0x00}},
      R"(Direct packet attempts : D2C)",
      R"(Direct packet attempts : D2C : Counts the number of DRS packets that we attempted to do direct2core/direct2UPI on.  There are 4 mutually exclusive filters.  Filter [0] can be used to get successful spawns, while [1:3] provide the different failure cases.  Note that this does not count packets that are not candidates for Direct2Core.  The only candidates for Direct2Core are DRS packets destined for Cbos.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_DIRECT_ATTEMPTS.D2K",
      EventDef::Encoding{.code = 0x12, .umask = 0x02, .msr_values = {0x00}},
      R"(Direct packet attempts : D2K)",
      R"(Direct packet attempts : D2K : Counts the number of DRS packets that we attempted to do direct2core/direct2UPI on.  There are 4 mutually exclusive filters.  Filter [0] can be used to get successful spawns, while [1:3] provide the different failure cases.  Note that this does not count packets that are not candidates for Direct2Core.  The only candidates for Direct2Core are DRS packets destined for Cbos.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_BYP_BLOCKED.FLOWQ_AD_VNA_LE2",
      EventDef::Encoding{.code = 0x14, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_M3_BYP_BLOCKED.FLOWQ_AD_VNA_LE2)",
      R"(UNC_UPI_M3_BYP_BLOCKED.FLOWQ_AD_VNA_LE2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_BYP_BLOCKED.FLOWQ_BL_VNA_EQ0",
      EventDef::Encoding{.code = 0x14, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_M3_BYP_BLOCKED.FLOWQ_BL_VNA_EQ0)",
      R"(UNC_UPI_M3_BYP_BLOCKED.FLOWQ_BL_VNA_EQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_BYP_BLOCKED.FLOWQ_AK_VNA_LE3",
      EventDef::Encoding{.code = 0x14, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_M3_BYP_BLOCKED.FLOWQ_AK_VNA_LE3)",
      R"(UNC_UPI_M3_BYP_BLOCKED.FLOWQ_AK_VNA_LE3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_BYP_BLOCKED.BGF_CRD",
      EventDef::Encoding{.code = 0x14, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_M3_BYP_BLOCKED.BGF_CRD)",
      R"(UNC_UPI_M3_BYP_BLOCKED.BGF_CRD)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_BYP_BLOCKED.GV_BLOCK",
      EventDef::Encoding{.code = 0x14, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_M3_BYP_BLOCKED.GV_BLOCK)",
      R"(UNC_UPI_M3_BYP_BLOCKED.GV_BLOCK)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AD_VNA_LE2",
      EventDef::Encoding{.code = 0x15, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AD_VNA_LE2)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AD_VNA_LE2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AD_VNA_BTW_2_THRESH",
      EventDef::Encoding{.code = 0x15, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AD_VNA_BTW_2_THRESH)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AD_VNA_BTW_2_THRESH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_BL_VNA_EQ0",
      EventDef::Encoding{.code = 0x15, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_BL_VNA_EQ0)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_BL_VNA_EQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_BL_VNA_BTW_0_THRESH",
      EventDef::Encoding{.code = 0x15, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_BL_VNA_BTW_0_THRESH)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_BL_VNA_BTW_0_THRESH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AK_VNA_LE3",
      EventDef::Encoding{.code = 0x15, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AK_VNA_LE3)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.FLOWQ_AK_VNA_LE3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.BGF_CRD",
      EventDef::Encoding{.code = 0x15, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.BGF_CRD)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.BGF_CRD)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_RXQ_BLOCKED.GV_BLOCK",
      EventDef::Encoding{.code = 0x15, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_UPI_M3_RXQ_BLOCKED.GV_BLOCK)",
      R"(UNC_UPI_M3_RXQ_BLOCKED.GV_BLOCK)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_M3_CRD_RETURN_BLOCKED",
      EventDef::Encoding{.code = 0x16, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_UPI_M3_CRD_RETURN_BLOCKED)",
      R"(UNC_UPI_M3_CRD_RETURN_BLOCKED)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ0",
      EventDef::Encoding{.code = 0x18, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ0)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ1",
      EventDef::Encoding{.code = 0x18, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ1)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ2",
      EventDef::Encoding{.code = 0x18, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ2)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AD_VNA_EQ2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.BL_VNA_EQ0",
      EventDef::Encoding{.code = 0x18, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.BL_VNA_EQ0)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.BL_VNA_EQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ0",
      EventDef::Encoding{.code = 0x18, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ0)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ1",
      EventDef::Encoding{.code = 0x18, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ1)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ2",
      EventDef::Encoding{.code = 0x18, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ2)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ3",
      EventDef::Encoding{.code = 0x18, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ3)",
      R"(UNC_UPI_FLOWQ_NO_VNA_CRD.AK_VNA_EQ3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_PHY_INIT_CYCLES",
      EventDef::Encoding{.code = 0x20, .umask = 0x00, .msr_values = {0x00}},
      R"(Cycles where phy is not in L0, L0c, L0p, L1)",
      R"(Cycles where phy is not in L0, L0c, L0p, L1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_POWER_L1_REQ",
      EventDef::Encoding{.code = 0x22, .umask = 0x00, .msr_values = {0x00}},
      R"(L1 Req (same as L1 Ack).)",
      R"(L1 Req (same as L1 Ack). : Counts the number of times a link sends/receives a LinkReqAck.  When the UPI links would like to change power state, the Tx side initiates a request to the Rx side requesting to change states.  This requests can either be accepted or denied.  If the Rx side replies with an Ack, the power mode will change.  If it replies with NAck, no change will take place.  This can be filtered based on Rx and Tx.  An Rx LinkReqAck refers to receiving an Ack (meaning this agent's Tx originally requested the power change).  A Tx LinkReqAck refers to sending this command (meaning the peer agent's Tx originally requested the power change and this agent accepted it).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_POWER_L1_NACK",
      EventDef::Encoding{.code = 0x23, .umask = 0x00, .msr_values = {0x00}},
      R"(L1 Req Nack)",
      R"(L1 Req Nack : Counts the number of times a link sends/receives a LinkReqNAck.  When the UPI links would like to change power state, the Tx side initiates a request to the Rx side requesting to change states.  This requests can either be accepted or denied.  If the Rx side replies with an Ack, the power mode will change.  If it replies with NAck, no change will take place.  This can be filtered based on Rx and Tx.  An Rx LinkReqNAck refers to receiving an NAck (meaning this agent's Tx originally requested the power change).  A Tx LinkReqNAck refers to sending this command (meaning the peer agent's Tx originally requested the power change and this agent accepted it).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL0_POWER_CYCLES",
      EventDef::Encoding{.code = 0x24, .umask = 0x00, .msr_values = {0x00}},
      R"(Cycles in L0)",
      R"(Cycles in L0 : Number of UPI qfclk cycles spent in L0 power mode in the Link Layer.  L0 is the default mode which provides the highest performance with the most power.  Use edge detect to count the number of instances that the link entered L0.  Link power states are per link and per direction, so for example the Tx direction could be in one state while Rx was in another.  The phy layer  sometimes leaves L0 for training, which will not be captured by this event.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL0P_POWER_CYCLES",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Cycles in L0p)",
      R"(Cycles in L0p : Number of UPI qfclk cycles spent in L0p power mode.  L0p is a mode where we disable 1/2 of the UPI lanes, decreasing our bandwidth in order to save power.  It increases snoop and data transfer latencies and decreases overall bandwidth.  This mode can be very useful in NUMA optimized workloads that largely only utilize UPI for snoops and their responses.  Use edge detect to count the number of instances when the UPI link entered L0p.  Link power states are per link and per direction, so for example the Tx direction could be in one state while Rx was in another.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0_POWER_CYCLES",
      EventDef::Encoding{.code = 0x26, .umask = 0x00, .msr_values = {0x00}},
      R"(Cycles in L0)",
      R"(Cycles in L0 : Number of UPI qfclk cycles spent in L0 power mode in the Link Layer.  L0 is the default mode which provides the highest performance with the most power.  Use edge detect to count the number of instances that the link entered L0.  Link power states are per link and per direction, so for example the Tx direction could be in one state while Rx was in another.  The phy layer  sometimes leaves L0 for training, which will not be captured by this event.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_POWER_CYCLES",
      EventDef::Encoding{.code = 0x27, .umask = 0x00, .msr_values = {0x00}},
      R"(Cycles in L0p)",
      R"(Cycles in L0p : Number of UPI qfclk cycles spent in L0p power mode.  L0p is a mode where we disable 1/2 of the UPI lanes, decreasing our bandwidth in order to save power.  It increases snoop and data transfer latencies and decreases overall bandwidth.  This mode can be very useful in NUMA optimized workloads that largely only utilize UPI for snoops and their responses.  Use edge detect to count the number of instances when the UPI link entered L0p.  Link power states are per link and per direction, so for example the Tx direction could be in one state while Rx was in another.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_POWER_CYCLES_LL_ENTER",
      EventDef::Encoding{.code = 0x28, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_POWER_CYCLES_LL_ENTER)",
      R"(UNC_UPI_TxL0P_POWER_CYCLES_LL_ENTER)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_POWER_CYCLES_M3_EXIT",
      EventDef::Encoding{.code = 0x29, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_POWER_CYCLES_M3_EXIT)",
      R"(UNC_UPI_TxL0P_POWER_CYCLES_M3_EXIT)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.CFG_CTL",
      EventDef::Encoding{.code = 0x2a, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.CFG_CTL)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.CFG_CTL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.RXQ",
      EventDef::Encoding{.code = 0x2a, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RXQ)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RXQ)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.RXQ_BYPASS",
      EventDef::Encoding{.code = 0x2a, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RXQ_BYPASS)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RXQ_BYPASS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.RXQ_CRED",
      EventDef::Encoding{.code = 0x2a, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RXQ_CRED)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RXQ_CRED)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.TXQ",
      EventDef::Encoding{.code = 0x2a, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.TXQ)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.TXQ)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.RETRY",
      EventDef::Encoding{.code = 0x2a, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RETRY)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.RETRY)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.DFX",
      EventDef::Encoding{.code = 0x2a, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.DFX)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.DFX)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL0P_CLK_ACTIVE.SPARE",
      EventDef::Encoding{.code = 0x2a, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.SPARE)",
      R"(UNC_UPI_TxL0P_CLK_ACTIVE.SPARE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_INSERTS.SLOT0",
      EventDef::Encoding{.code = 0x30, .umask = 0x01, .msr_values = {0x00}},
      R"(RxQ Flit Buffer Allocations : Slot 0)",
      R"(RxQ Flit Buffer Allocations : Slot 0 : Number of allocations into the UPI Rx Flit Buffer.  Generally, when data is transmitted across UPI, it will bypass the RxQ and pass directly to the ring interface.  If things back up getting transmitted onto the ring, however, it may need to allocate into this buffer, thus increasing the latency.  This event can be used in conjunction with the Flit Buffer Occupancy event in order to calculate the average flit buffer lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_INSERTS.SLOT1",
      EventDef::Encoding{.code = 0x30, .umask = 0x02, .msr_values = {0x00}},
      R"(RxQ Flit Buffer Allocations : Slot 1)",
      R"(RxQ Flit Buffer Allocations : Slot 1 : Number of allocations into the UPI Rx Flit Buffer.  Generally, when data is transmitted across UPI, it will bypass the RxQ and pass directly to the ring interface.  If things back up getting transmitted onto the ring, however, it may need to allocate into this buffer, thus increasing the latency.  This event can be used in conjunction with the Flit Buffer Occupancy event in order to calculate the average flit buffer lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_INSERTS.SLOT2",
      EventDef::Encoding{.code = 0x30, .umask = 0x04, .msr_values = {0x00}},
      R"(RxQ Flit Buffer Allocations : Slot 2)",
      R"(RxQ Flit Buffer Allocations : Slot 2 : Number of allocations into the UPI Rx Flit Buffer.  Generally, when data is transmitted across UPI, it will bypass the RxQ and pass directly to the ring interface.  If things back up getting transmitted onto the ring, however, it may need to allocate into this buffer, thus increasing the latency.  This event can be used in conjunction with the Flit Buffer Occupancy event in order to calculate the average flit buffer lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BYPASSED.SLOT0",
      EventDef::Encoding{.code = 0x31, .umask = 0x01, .msr_values = {0x00}},
      R"(RxQ Flit Buffer Bypassed : Slot 0)",
      R"(RxQ Flit Buffer Bypassed : Slot 0 : Counts the number of times that an incoming flit was able to bypass the flit buffer and pass directly across the BGF and into the Egress.  This is a latency optimization, and should generally be the common case.  If this value is less than the number of flits transferred, it implies that there was queueing getting onto the ring, and thus the transactions saw higher latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BYPASSED.SLOT1",
      EventDef::Encoding{.code = 0x31, .umask = 0x02, .msr_values = {0x00}},
      R"(RxQ Flit Buffer Bypassed : Slot 1)",
      R"(RxQ Flit Buffer Bypassed : Slot 1 : Counts the number of times that an incoming flit was able to bypass the flit buffer and pass directly across the BGF and into the Egress.  This is a latency optimization, and should generally be the common case.  If this value is less than the number of flits transferred, it implies that there was queueing getting onto the ring, and thus the transactions saw higher latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_BYPASSED.SLOT2",
      EventDef::Encoding{.code = 0x31, .umask = 0x04, .msr_values = {0x00}},
      R"(RxQ Flit Buffer Bypassed : Slot 2)",
      R"(RxQ Flit Buffer Bypassed : Slot 2 : Counts the number of times that an incoming flit was able to bypass the flit buffer and pass directly across the BGF and into the Egress.  This is a latency optimization, and should generally be the common case.  If this value is less than the number of flits transferred, it implies that there was queueing getting onto the ring, and thus the transactions saw higher latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_OCCUPANCY.SLOT0",
      EventDef::Encoding{.code = 0x32, .umask = 0x01, .msr_values = {0x00}},
      R"(RxQ Occupancy - All Packets : Slot 0)",
      R"(RxQ Occupancy - All Packets : Slot 0 : Accumulates the number of elements in the UPI RxQ in each cycle.  Generally, when data is transmitted across UPI, it will bypass the RxQ and pass directly to the ring interface.  If things back up getting transmitted onto the ring, however, it may need to allocate into this buffer, thus increasing the latency.  This event can be used in conjunction with the Flit Buffer Not Empty event to calculate average occupancy, or with the Flit Buffer Allocations event to track average lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_OCCUPANCY.SLOT1",
      EventDef::Encoding{.code = 0x32, .umask = 0x02, .msr_values = {0x00}},
      R"(RxQ Occupancy - All Packets : Slot 1)",
      R"(RxQ Occupancy - All Packets : Slot 1 : Accumulates the number of elements in the UPI RxQ in each cycle.  Generally, when data is transmitted across UPI, it will bypass the RxQ and pass directly to the ring interface.  If things back up getting transmitted onto the ring, however, it may need to allocate into this buffer, thus increasing the latency.  This event can be used in conjunction with the Flit Buffer Not Empty event to calculate average occupancy, or with the Flit Buffer Allocations event to track average lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_OCCUPANCY.SLOT2",
      EventDef::Encoding{.code = 0x32, .umask = 0x04, .msr_values = {0x00}},
      R"(RxQ Occupancy - All Packets : Slot 2)",
      R"(RxQ Occupancy - All Packets : Slot 2 : Accumulates the number of elements in the UPI RxQ in each cycle.  Generally, when data is transmitted across UPI, it will bypass the RxQ and pass directly to the ring interface.  If things back up getting transmitted onto the ring, however, it may need to allocate into this buffer, thus increasing the latency.  This event can be used in conjunction with the Flit Buffer Not Empty event to calculate average occupancy, or with the Flit Buffer Allocations event to track average lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_SLOT_BYPASS.S0_RXQ1",
      EventDef::Encoding{.code = 0x33, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_SLOT_BYPASS.S0_RXQ1)",
      R"(UNC_UPI_RxL_SLOT_BYPASS.S0_RXQ1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_SLOT_BYPASS.S0_RXQ2",
      EventDef::Encoding{.code = 0x33, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_SLOT_BYPASS.S0_RXQ2)",
      R"(UNC_UPI_RxL_SLOT_BYPASS.S0_RXQ2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_SLOT_BYPASS.S1_RXQ0",
      EventDef::Encoding{.code = 0x33, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_SLOT_BYPASS.S1_RXQ0)",
      R"(UNC_UPI_RxL_SLOT_BYPASS.S1_RXQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_SLOT_BYPASS.S1_RXQ2",
      EventDef::Encoding{.code = 0x33, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_SLOT_BYPASS.S1_RXQ2)",
      R"(UNC_UPI_RxL_SLOT_BYPASS.S1_RXQ2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_SLOT_BYPASS.S2_RXQ0",
      EventDef::Encoding{.code = 0x33, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_SLOT_BYPASS.S2_RXQ0)",
      R"(UNC_UPI_RxL_SLOT_BYPASS.S2_RXQ0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_SLOT_BYPASS.S2_RXQ1",
      EventDef::Encoding{.code = 0x33, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_SLOT_BYPASS.S2_RXQ1)",
      R"(UNC_UPI_RxL_SLOT_BYPASS.S2_RXQ1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_CREDITS_CONSUMED_VN0",
      EventDef::Encoding{.code = 0x39, .umask = 0x00, .msr_values = {0x00}},
      R"(VN0 Credit Consumed)",
      R"(VN0 Credit Consumed : Counts the number of times that an RxQ VN0 credit was consumed (i.e. message uses a VN0 credit for the Rx Buffer).  This includes packets that went through the RxQ and those that were bypasssed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_CREDITS_CONSUMED_VN1",
      EventDef::Encoding{.code = 0x3a, .umask = 0x00, .msr_values = {0x00}},
      R"(VN1 Credit Consumed)",
      R"(VN1 Credit Consumed : Counts the number of times that an RxQ VN1 credit was consumed (i.e. message uses a VN1 credit for the Rx Buffer).  This includes packets that went through the RxQ and those that were bypasssed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_INSERTS",
      EventDef::Encoding{.code = 0x40, .umask = 0x00, .msr_values = {0x00}},
      R"(Tx Flit Buffer Allocations)",
      R"(Tx Flit Buffer Allocations : Number of allocations into the UPI Tx Flit Buffer.  Generally, when data is transmitted across UPI, it will bypass the TxQ and pass directly to the link.  However, the TxQ will be used with L0p and when LLR occurs, increasing latency to transfer out to the link.  This event can be used in conjunction with the Flit Buffer Occupancy event in order to calculate the average flit buffer lifetime.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_BYPASSED",
      EventDef::Encoding{.code = 0x41, .umask = 0x00, .msr_values = {0x00}},
      R"(Tx Flit Buffer Bypassed)",
      R"(Tx Flit Buffer Bypassed : Counts the number of times that an incoming flit was able to bypass the Tx flit buffer and pass directly out the UPI Link. Generally, when data is transmitted across UPI, it will bypass the TxQ and pass directly to the link.  However, the TxQ will be used with L0p and when LLR occurs, increasing latency to transfer out to the link.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_OCCUPANCY",
      EventDef::Encoding{.code = 0x42, .umask = 0x00, .msr_values = {0x00}},
      R"(Tx Flit Buffer Occupancy)",
      R"(Tx Flit Buffer Occupancy : Accumulates the number of flits in the TxQ.  Generally, when data is transmitted across UPI, it will bypass the TxQ and pass directly to the link.  However, the TxQ will be used with L0p and when LLR occurs, increasing latency to transfer out to the link. This can be used with the cycles not empty event to track average occupancy, or the allocations event to track average lifetime in the TxQ.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_VNA_CREDIT_RETURN_OCCUPANCY",
      EventDef::Encoding{.code = 0x44, .umask = 0x00, .msr_values = {0x00}},
      R"(VNA Credits Pending Return - Occupancy)",
      R"(VNA Credits Pending Return - Occupancy : Number of VNA credits in the Rx side that are waitng to be returned back across the link.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_VNA_CREDIT_RETURN_BLOCKED_VN01",
      EventDef::Encoding{.code = 0x45, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_UPI_VNA_CREDIT_RETURN_BLOCKED_VN01)",
      R"(UNC_UPI_VNA_CREDIT_RETURN_BLOCKED_VN01)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_REQ_SLOT2_FROM_M3.VNA",
      EventDef::Encoding{.code = 0x46, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.VNA)",
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.VNA)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_REQ_SLOT2_FROM_M3.VN0",
      EventDef::Encoding{.code = 0x46, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.VN0)",
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_REQ_SLOT2_FROM_M3.VN1",
      EventDef::Encoding{.code = 0x46, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.VN1)",
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_REQ_SLOT2_FROM_M3.ACK",
      EventDef::Encoding{.code = 0x46, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.ACK)",
      R"(UNC_UPI_REQ_SLOT2_FROM_M3.ACK)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_REQUESTS.INVITOE",
      EventDef::Encoding{.code = 0x50, .umask = 0x30, .msr_values = {0x00}},
      R"(Requests for exclusive ownership of a cache line without receiving data)",
      R"(Counts the total number of requests coming from a unit on this socket for exclusive ownership of a cache line without receiving data (INVITOE) to the CHA.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.ALL",
      EventDef::Encoding{.code = 0x51, .umask = 0x01, .msr_values = {0x00}},
      R"(Snoops Sent : All)",
      R"(Snoops Sent : All : Counts the number of snoops issued by the HA.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.LOCAL",
      EventDef::Encoding{.code = 0x51, .umask = 0x04, .msr_values = {0x00}},
      R"(Snoops Sent : Broadcast or directed Snoops sent for Local Requests)",
      R"(Snoops Sent : Broadcast or directed Snoops sent for Local Requests : Counts the number of snoops issued by the HA. : Counts the number of broadcast or directed snoops issued by the HA per request. This filter includes only requests coming from the local socket.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.REMOTE",
      EventDef::Encoding{.code = 0x51, .umask = 0x08, .msr_values = {0x00}},
      R"(Snoops Sent : Broadcast or directed Snoops sent for Remote Requests)",
      R"(Snoops Sent : Broadcast or directed Snoops sent for Remote Requests : Counts the number of snoops issued by the HA. : Counts the number of broadcast or directed snoops issued by the HA per request. This filter includes only requests coming from the remote socket.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.BCST_LOCAL",
      EventDef::Encoding{.code = 0x51, .umask = 0x10, .msr_values = {0x00}},
      R"(Snoops Sent : Broadcast snoop for Local Requests)",
      R"(Snoops Sent : Broadcast snoop for Local Requests : Counts the number of snoops issued by the HA. : Counts the number of broadcast snoops issued by the HA. This filter includes only requests coming from local sockets.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.BCST_REMOTE",
      EventDef::Encoding{.code = 0x51, .umask = 0x20, .msr_values = {0x00}},
      R"(Snoops Sent : Broadcast snoops for Remote Requests)",
      R"(Snoops Sent : Broadcast snoops for Remote Requests : Counts the number of snoops issued by the HA. : Counts the number of broadcast snoops issued by the HA.This filter includes only requests coming from remote sockets.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.DIRECT_LOCAL",
      EventDef::Encoding{.code = 0x51, .umask = 0x40, .msr_values = {0x00}},
      R"(Snoops Sent : Directed snoops for Local Requests)",
      R"(Snoops Sent : Directed snoops for Local Requests : Counts the number of snoops issued by the HA. : Counts the number of directed snoops issued by the HA. This filter includes only requests coming from local sockets.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOPS_SENT.DIRECT_REMOTE",
      EventDef::Encoding{.code = 0x51, .umask = 0x80, .msr_values = {0x00}},
      R"(Snoops Sent : Directed snoops for Remote Requests)",
      R"(Snoops Sent : Directed snoops for Remote Requests : Counts the number of snoops issued by the HA. : Counts the number of directed snoops issued by the HA. This filter includes only requests coming from remote sockets.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIR_LOOKUP.NO_SNP",
      EventDef::Encoding{.code = 0x53, .umask = 0x02, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory state lookups; Snoop Not Needed)",
      R"(Counts transactions that looked into the multi-socket cacheline Directory state, and therefore did not send a snoop because the Directory indicated it was not needed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIR_LOOKUP.SNP",
      EventDef::Encoding{.code = 0x53, .umask = 0x01, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory state lookups; Snoop Needed)",
      R"(Counts  transactions that looked into the multi-socket cacheline Directory state, and sent one or more snoops, because the Directory indicated it was needed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_OSB.LOCAL_INVITOE",
      EventDef::Encoding{.code = 0x55, .umask = 0x01, .msr_values = {0x00}},
      R"(OSB Snoop Broadcast : Local InvItoE)",
      R"(OSB Snoop Broadcast : Local InvItoE : Count of OSB snoop broadcasts. Counts by 1 per request causing OSB snoops to be broadcast. Does not count all the snoops generated by OSB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_OSB.LOCAL_READ",
      EventDef::Encoding{.code = 0x55, .umask = 0x02, .msr_values = {0x00}},
      R"(OSB Snoop Broadcast : Local Rd)",
      R"(OSB Snoop Broadcast : Local Rd : Count of OSB snoop broadcasts. Counts by 1 per request causing OSB snoops to be broadcast. Does not count all the snoops generated by OSB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_OSB.REMOTE_READ",
      EventDef::Encoding{.code = 0x55, .umask = 0x04, .msr_values = {0x00}},
      R"(OSB Snoop Broadcast : Remote Rd)",
      R"(OSB Snoop Broadcast : Remote Rd : Count of OSB snoop broadcasts. Counts by 1 per request causing OSB snoops to be broadcast. Does not count all the snoops generated by OSB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_OSB.REMOTE_READINVITOE",
      EventDef::Encoding{.code = 0x55, .umask = 0x08, .msr_values = {0x00}},
      R"(OSB Snoop Broadcast : Remote Rd InvItoE)",
      R"(OSB Snoop Broadcast : Remote Rd InvItoE : Count of OSB snoop broadcasts. Counts by 1 per request causing OSB snoops to be broadcast. Does not count all the snoops generated by OSB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_OSB.RFO_HITS_SNP_BCAST",
      EventDef::Encoding{.code = 0x55, .umask = 0x10, .msr_values = {0x00}},
      R"(OSB Snoop Broadcast : RFO HitS Snoop Broadcast)",
      R"(OSB Snoop Broadcast : RFO HitS Snoop Broadcast : Count of OSB snoop broadcasts. Counts by 1 per request causing OSB snoops to be broadcast. Does not count all the snoops generated by OSB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_OSB.OFF_PWRHEURISTIC",
      EventDef::Encoding{.code = 0x55, .umask = 0x20, .msr_values = {0x00}},
      R"(OSB Snoop Broadcast : Off)",
      R"(OSB Snoop Broadcast : Off : Count of OSB snoop broadcasts. Counts by 1 per request causing OSB snoops to be broadcast. Does not count all the snoops generated by OSB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WB_PUSH_MTOI.LLC",
      EventDef::Encoding{.code = 0x56, .umask = 0x01, .msr_values = {0x00}},
      R"(WbPushMtoI : Pushed to LLC)",
      R"(WbPushMtoI : Pushed to LLC : Counts the number of times when the CHA was received WbPushMtoI : Counts the number of times when the CHA was able to push WbPushMToI to LLC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WB_PUSH_MTOI.MEM",
      EventDef::Encoding{.code = 0x56, .umask = 0x02, .msr_values = {0x00}},
      R"(WbPushMtoI : Pushed to Memory)",
      R"(WbPushMtoI : Pushed to Memory : Counts the number of times when the CHA was received WbPushMtoI : Counts the number of times when the CHA was unable to push WbPushMToI to LLC (hence pushed it to MEM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_BYPASS_CHA_IMC.TAKEN",
      EventDef::Encoding{.code = 0x57, .umask = 0x01, .msr_values = {0x00}},
      R"(CHA to iMC Bypass : Taken)",
      R"(CHA to iMC Bypass : Taken : Counts the number of times when the CHA was able to bypass HA pipe on the way to iMC.  This is a latency optimization for situations when there is light loadings on the memory subsystem.  This can be filtered by when the bypass was taken and when it was not. : Filter for transactions that succeeded in taking the full bypass.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_BYPASS_CHA_IMC.INTERMEDIATE",
      EventDef::Encoding{.code = 0x57, .umask = 0x02, .msr_values = {0x00}},
      R"(CHA to iMC Bypass : Intermediate bypass Taken)",
      R"(CHA to iMC Bypass : Intermediate bypass Taken : Counts the number of times when the CHA was able to bypass HA pipe on the way to iMC.  This is a latency optimization for situations when there is light loadings on the memory subsystem.  This can be filtered by when the bypass was taken and when it was not. : Filter for transactions that succeeded in taking the intermediate bypass.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_BYPASS_CHA_IMC.NOT_TAKEN",
      EventDef::Encoding{.code = 0x57, .umask = 0x04, .msr_values = {0x00}},
      R"(CHA to iMC Bypass : Not Taken)",
      R"(CHA to iMC Bypass : Not Taken : Counts the number of times when the CHA was able to bypass HA pipe on the way to iMC.  This is a latency optimization for situations when there is light loadings on the memory subsystem.  This can be filtered by when the bypass was taken and when it was not. : Filter for transactions that could not take the bypass, and issues a read to memory. Note that transactions that did not take the bypass but did not issue read to memory will not be counted.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_READ_NO_CREDITS.MC0",
      EventDef::Encoding{.code = 0x58, .umask = 0x01, .msr_values = {0x00}},
      R"(CHA iMC CHNx READ Credits Empty : MC0)",
      R"(CHA iMC CHNx READ Credits Empty : MC0 : Counts the number of times when there are no credits available for sending reads from the CHA into the iMC.  In order to send reads into the memory controller, the HA must first acquire a credit for the iMC's AD Ingress queue. : Filter for memory controller 0 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_READ_NO_CREDITS.MC1",
      EventDef::Encoding{.code = 0x58, .umask = 0x02, .msr_values = {0x00}},
      R"(CHA iMC CHNx READ Credits Empty : MC1)",
      R"(CHA iMC CHNx READ Credits Empty : MC1 : Counts the number of times when there are no credits available for sending reads from the CHA into the iMC.  In order to send reads into the memory controller, the HA must first acquire a credit for the iMC's AD Ingress queue. : Filter for memory controller 1 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_READ_NO_CREDITS.MC2",
      EventDef::Encoding{.code = 0x58, .umask = 0x04, .msr_values = {0x00}},
      R"(CHA iMC CHNx READ Credits Empty : MC2)",
      R"(CHA iMC CHNx READ Credits Empty : MC2 : Counts the number of times when there are no credits available for sending reads from the CHA into the iMC.  In order to send reads into the memory controller, the HA must first acquire a credit for the iMC's AD Ingress queue. : Filter for memory controller 2 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_READ_NO_CREDITS.MC3",
      EventDef::Encoding{.code = 0x58, .umask = 0x08, .msr_values = {0x00}},
      R"(CHA iMC CHNx READ Credits Empty : MC3)",
      R"(CHA iMC CHNx READ Credits Empty : MC3 : Counts the number of times when there are no credits available for sending reads from the CHA into the iMC.  In order to send reads into the memory controller, the HA must first acquire a credit for the iMC's AD Ingress queue. : Filter for memory controller 3 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_READ_NO_CREDITS.MC4",
      EventDef::Encoding{.code = 0x58, .umask = 0x10, .msr_values = {0x00}},
      R"(CHA iMC CHNx READ Credits Empty : MC4)",
      R"(CHA iMC CHNx READ Credits Empty : MC4 : Counts the number of times when there are no credits available for sending reads from the CHA into the iMC.  In order to send reads into the memory controller, the HA must first acquire a credit for the iMC's AD Ingress queue. : Filter for memory controller 4 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_READ_NO_CREDITS.MC5",
      EventDef::Encoding{.code = 0x58, .umask = 0x20, .msr_values = {0x00}},
      R"(CHA iMC CHNx READ Credits Empty : MC5)",
      R"(CHA iMC CHNx READ Credits Empty : MC5 : Counts the number of times when there are no credits available for sending reads from the CHA into the iMC.  In order to send reads into the memory controller, the HA must first acquire a credit for the iMC's AD Ingress queue. : Filter for memory controller 5 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_IMC_READS_COUNT.PRIORITY",
      EventDef::Encoding{.code = 0x59, .umask = 0x02, .msr_values = {0x00}},
      R"(HA to iMC Reads Issued : ISOCH)",
      R"(HA to iMC Reads Issued : ISOCH : Count of the number of reads issued to any of the memory controller channels.  This can be filtered by the priority of the reads.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WRITE_NO_CREDITS.MC0",
      EventDef::Encoding{.code = 0x5a, .umask = 0x01, .msr_values = {0x00}},
      R"(CHA iMC CHNx WRITE Credits Empty : MC0)",
      R"(CHA iMC CHNx WRITE Credits Empty : MC0 : Counts the number of times when there are no credits available for sending WRITEs from the CHA into the iMC.  In order to send WRITEs into the memory controller, the HA must first acquire a credit for the iMC's BL Ingress queue. : Filter for memory controller 0 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WRITE_NO_CREDITS.MC1",
      EventDef::Encoding{.code = 0x5a, .umask = 0x02, .msr_values = {0x00}},
      R"(CHA iMC CHNx WRITE Credits Empty : MC1)",
      R"(CHA iMC CHNx WRITE Credits Empty : MC1 : Counts the number of times when there are no credits available for sending WRITEs from the CHA into the iMC.  In order to send WRITEs into the memory controller, the HA must first acquire a credit for the iMC's BL Ingress queue. : Filter for memory controller 1 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WRITE_NO_CREDITS.MC2",
      EventDef::Encoding{.code = 0x5a, .umask = 0x04, .msr_values = {0x00}},
      R"(CHA iMC CHNx WRITE Credits Empty : MC2)",
      R"(CHA iMC CHNx WRITE Credits Empty : MC2 : Counts the number of times when there are no credits available for sending WRITEs from the CHA into the iMC.  In order to send WRITEs into the memory controller, the HA must first acquire a credit for the iMC's BL Ingress queue. : Filter for memory controller 2 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WRITE_NO_CREDITS.MC3",
      EventDef::Encoding{.code = 0x5a, .umask = 0x08, .msr_values = {0x00}},
      R"(CHA iMC CHNx WRITE Credits Empty : MC3)",
      R"(CHA iMC CHNx WRITE Credits Empty : MC3 : Counts the number of times when there are no credits available for sending WRITEs from the CHA into the iMC.  In order to send WRITEs into the memory controller, the HA must first acquire a credit for the iMC's BL Ingress queue. : Filter for memory controller 3 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WRITE_NO_CREDITS.MC4",
      EventDef::Encoding{.code = 0x5a, .umask = 0x10, .msr_values = {0x00}},
      R"(CHA iMC CHNx WRITE Credits Empty : MC4)",
      R"(CHA iMC CHNx WRITE Credits Empty : MC4 : Counts the number of times when there are no credits available for sending WRITEs from the CHA into the iMC.  In order to send WRITEs into the memory controller, the HA must first acquire a credit for the iMC's BL Ingress queue. : Filter for memory controller 4 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_WRITE_NO_CREDITS.MC5",
      EventDef::Encoding{.code = 0x5a, .umask = 0x20, .msr_values = {0x00}},
      R"(CHA iMC CHNx WRITE Credits Empty : MC5)",
      R"(CHA iMC CHNx WRITE Credits Empty : MC5 : Counts the number of times when there are no credits available for sending WRITEs from the CHA into the iMC.  In order to send WRITEs into the memory controller, the HA must first acquire a credit for the iMC's BL Ingress queue. : Filter for memory controller 5 only.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_IMC_WRITES_COUNT.PARTIAL",
      EventDef::Encoding{.code = 0x5b, .umask = 0x02, .msr_values = {0x00}},
      R"(CHA to iMC Full Line Writes Issued : Partial Non-ISOCH)",
      R"(CHA to iMC Full Line Writes Issued : Partial Non-ISOCH : Counts the total number of full line writes issued from the HA into the memory controller.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_IMC_WRITES_COUNT.FULL_PRIORITY",
      EventDef::Encoding{.code = 0x5b, .umask = 0x04, .msr_values = {0x00}},
      R"(CHA to iMC Full Line Writes Issued : ISOCH Full Line)",
      R"(CHA to iMC Full Line Writes Issued : ISOCH Full Line : Counts the total number of full line writes issued from the HA into the memory controller.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_IMC_WRITES_COUNT.PARTIAL_PRIORITY",
      EventDef::Encoding{.code = 0x5b, .umask = 0x08, .msr_values = {0x00}},
      R"(CHA to iMC Full Line Writes Issued : ISOCH Partial)",
      R"(CHA to iMC Full Line Writes Issued : ISOCH Partial : Counts the total number of full line writes issued from the HA into the memory controller.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPI",
      EventDef::Encoding{.code = 0x5c, .umask = 0x01, .msr_values = {0x00}},
      R"(RspI Snoop Responses Received)",
      R"(Counts when a transaction with the opcode type RspI Snoop Response was received which indicates the remote cache does not have the data, or when the remote cache silently evicts data (such as when an RFO: the Read for Ownership issued before a write hits non-modified data).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPIFWD",
      EventDef::Encoding{.code = 0x5c, .umask = 0x04, .msr_values = {0x00}},
      R"(RspIFwd Snoop Responses Received)",
      R"(Counts when a a transaction with the opcode type RspIFwd Snoop Response was received which indicates a remote caching agent forwarded the data and the requesting agent is able to acquire the data in E (Exclusive) or M (modified) states.  This is commonly returned with RFO (the Read for Ownership issued before a write) transactions.  The snoop could have either been to a cacheline in the M,E,F (Modified, Exclusive or Forward)  states.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPS",
      EventDef::Encoding{.code = 0x5c, .umask = 0x02, .msr_values = {0x00}},
      R"(RspS Snoop Responses Received)",
      R"(Counts when a transaction with the opcode type RspS Snoop Response was received which indicates when a remote cache has data but is not forwarding it.  It is a way to let the requesting socket know that it cannot allocate the data in E state.  No data is sent with S RspS.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPSFWD",
      EventDef::Encoding{.code = 0x5c, .umask = 0x08, .msr_values = {0x00}},
      R"(RspSFwd Snoop Responses Received)",
      R"(Counts when a a transaction with the opcode type RspSFwd Snoop Response was received which indicates a remote caching agent forwarded the data but held on to its current copy.  This is common for data and code reads that hit in a remote socket in E (Exclusive) or F (Forward) state.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPWB",
      EventDef::Encoding{.code = 0x5c, .umask = 0x10, .msr_values = {0x00}},
      R"(Snoop Responses Received : Rsp*WB)",
      R"(Snoop Responses Received : Rsp*WB : Counts the total number of RspI snoop responses received.  Whenever a snoops are issued, one or more snoop responses will be returned depending on the topology of the system.   In systems larger than 2s, when multiple snoops are returned this will count all the snoops that are received.  For example, if 3 snoops were issued and returned RspI, RspS, and RspSFwd; then each of these sub-events would increment by 1. : Filters for a snoop response of RspIWB or RspSWB.  This is returned when a non-RFO request hits in M state.  Data and Code Reads can return either RspIWB or RspSWB depending on how the system has been configured.  InvItoE transactions will also return RspIWB because they must acquire ownership.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPFWDWB",
      EventDef::Encoding{.code = 0x5c, .umask = 0x20, .msr_values = {0x00}},
      R"(Snoop Responses Received : Rsp*Fwd*WB)",
      R"(Snoop Responses Received : Rsp*Fwd*WB : Counts the total number of RspI snoop responses received.  Whenever a snoops are issued, one or more snoop responses will be returned depending on the topology of the system.   In systems larger than 2s, when multiple snoops are returned this will count all the snoops that are received.  For example, if 3 snoops were issued and returned RspI, RspS, and RspSFwd; then each of these sub-events would increment by 1. : Filters for a snoop response of Rsp*Fwd*WB.  This snoop response is only used in 4s systems.  It is used when a snoop HITM's in a remote caching agent and it directly forwards data to a requestor, and simultaneously returns data to the home to be written back to memory.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPCNFLCT",
      EventDef::Encoding{.code = 0x5c, .umask = 0x40, .msr_values = {0x00}},
      R"(Snoop Responses Received : RSPCNFLCT*)",
      R"(Snoop Responses Received : RSPCNFLCT* : Counts the total number of RspI snoop responses received.  Whenever a snoops are issued, one or more snoop responses will be returned depending on the topology of the system.   In systems larger than 2s, when multiple snoops are returned this will count all the snoops that are received.  For example, if 3 snoops were issued and returned RspI, RspS, and RspSFwd; then each of these sub-events would increment by 1. : Filters for snoops responses of RspConflict.  This is returned when a snoop finds an existing outstanding transaction in a remote caching agent when it CAMs that caching agent.  This triggers conflict resolution hardware.  This covers both RspCnflct and RspCnflctWbI.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP.RSPFWD",
      EventDef::Encoding{.code = 0x5c, .umask = 0x80, .msr_values = {0x00}},
      R"(Snoop Responses Received : RspFwd)",
      R"(Snoop Responses Received : RspFwd : Counts the total number of RspI snoop responses received.  Whenever a snoops are issued, one or more snoop responses will be returned depending on the topology of the system.   In systems larger than 2s, when multiple snoops are returned this will count all the snoops that are received.  For example, if 3 snoops were issued and returned RspI, RspS, and RspSFwd; then each of these sub-events would increment by 1. : Filters for a snoop response of RspFwd to a CA request.  This snoop response is only possible for RdCur when a snoop HITM/E in a remote caching agent and it directly forwards data to a requestor without changing the requestor's cache line state.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPI",
      EventDef::Encoding{.code = 0x5d, .umask = 0x01, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : RspI)",
      R"(Snoop Responses Received Local : RspI : Number of snoop responses received for a Local  request : Filters for snoops responses of RspI to local CA requests.  RspI is returned when the remote cache does not have the data, or when the remote cache silently evicts data (such as when an RFO hits non-modified data).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPS",
      EventDef::Encoding{.code = 0x5d, .umask = 0x02, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : RspS)",
      R"(Snoop Responses Received Local : RspS : Number of snoop responses received for a Local  request : Filters for snoop responses of RspS to local CA requests.  RspS is returned when a remote cache has data but is not forwarding it.  It is a way to let the requesting socket know that it cannot allocate the data in E state.  No data is sent with S RspS.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPIFWD",
      EventDef::Encoding{.code = 0x5d, .umask = 0x04, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : RspIFwd)",
      R"(Snoop Responses Received Local : RspIFwd : Number of snoop responses received for a Local  request : Filters for snoop responses of RspIFwd to local CA requests.  This is returned when a remote caching agent forwards data and the requesting agent is able to acquire the data in E or M states.  This is commonly returned with RFO transactions.  It can be either a HitM or a HitFE.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPSFWD",
      EventDef::Encoding{.code = 0x5d, .umask = 0x08, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : RspSFwd)",
      R"(Snoop Responses Received Local : RspSFwd : Number of snoop responses received for a Local  request : Filters for a snoop response of RspSFwd to local CA requests.  This is returned when a remote caching agent forwards data but holds on to its current copy.  This is common for data and code reads that hit in a remote socket in E or F state.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPWB",
      EventDef::Encoding{.code = 0x5d, .umask = 0x10, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : Rsp*WB)",
      R"(Snoop Responses Received Local : Rsp*WB : Number of snoop responses received for a Local  request : Filters for a snoop response of RspIWB or RspSWB to local CA requests.  This is returned when a non-RFO request hits in M state.  Data and Code Reads can return either RspIWB or RspSWB depending on how the system has been configured.  InvItoE transactions will also return RspIWB because they must acquire ownership.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPFWDWB",
      EventDef::Encoding{.code = 0x5d, .umask = 0x20, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : Rsp*FWD*WB)",
      R"(Snoop Responses Received Local : Rsp*FWD*WB : Number of snoop responses received for a Local  request : Filters for a snoop response of Rsp*Fwd*WB to local CA requests.  This snoop response is only used in 4s systems.  It is used when a snoop HITM's in a remote caching agent and it directly forwards data to a requestor, and simultaneously returns data to the home to be written back to memory.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPCNFLCT",
      EventDef::Encoding{.code = 0x5d, .umask = 0x40, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : RspCnflct)",
      R"(Snoop Responses Received Local : RspCnflct : Number of snoop responses received for a Local  request : Filters for snoops responses of RspConflict to local CA requests.  This is returned when a snoop finds an existing outstanding transaction in a remote caching agent when it CAMs that caching agent.  This triggers conflict resolution hardware.  This covers both RspCnflct and RspCnflctWbI.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RESP_LOCAL.RSPFWD",
      EventDef::Encoding{.code = 0x5d, .umask = 0x80, .msr_values = {0x00}},
      R"(Snoop Responses Received Local : RspFwd)",
      R"(Snoop Responses Received Local : RspFwd : Number of snoop responses received for a Local  request : Filters for a snoop response of RspFwd to local CA requests.  This snoop response is only possible for RdCur when a snoop HITM/E in a remote caching agent and it directly forwards data to a requestor without changing the requestor's cache line state.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_LOOKUP.READ",
      EventDef::Encoding{.code = 0x5e, .umask = 0x01, .msr_values = {0x00}},
      R"(Counts Number of times HitMe Cache is accessed : op is RdCode, RdData, RdDataMigratory, RdCur, RdInvOwn, RdInv, Inv*)",
      R"(Counts Number of times HitMe Cache is accessed : op is RdCode, RdData, RdDataMigratory, RdCur, RdInvOwn, RdInv, Inv*)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_LOOKUP.WRITE",
      EventDef::Encoding{.code = 0x5e, .umask = 0x02, .msr_values = {0x00}},
      R"(Counts Number of times HitMe Cache is accessed : op is WbMtoE, WbMtoI, WbPushMtoI, WbFlush, or WbMtoS)",
      R"(Counts Number of times HitMe Cache is accessed : op is WbMtoE, WbMtoI, WbPushMtoI, WbFlush, or WbMtoS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_HIT.EX_RDS",
      EventDef::Encoding{.code = 0x5f, .umask = 0x01, .msr_values = {0x00}},
      R"(Read request from a remote socket which hit in the HitMe Cache to a line In the E state)",
      R"(Counts read requests from a remote socket which hit in the HitME cache (used to cache the multi-socket Directory state) to a line in the E(Exclusive) state.  This includes the following read opcodes (RdCode, RdData, RdDataMigratory, RdCur, RdInv*, Inv*).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_HIT.SHARED_OWNREQ",
      EventDef::Encoding{.code = 0x5f, .umask = 0x04, .msr_values = {0x00}},
      R"(Counts Number of Hits in HitMe Cache : Shared hit and op is RdInvOwn, RdInv, Inv*)",
      R"(Counts Number of Hits in HitMe Cache : Shared hit and op is RdInvOwn, RdInv, Inv*)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_HIT.WBMTOE",
      EventDef::Encoding{.code = 0x5f, .umask = 0x08, .msr_values = {0x00}},
      R"(Counts Number of Hits in HitMe Cache : op is WbMtoE)",
      R"(Counts Number of Hits in HitMe Cache : op is WbMtoE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_HIT.WBMTOI_OR_S",
      EventDef::Encoding{.code = 0x5f, .umask = 0x10, .msr_values = {0x00}},
      R"(Counts Number of Hits in HitMe Cache : op is WbMtoI, WbPushMtoI, WbFlush, or WbMtoS)",
      R"(Counts Number of Hits in HitMe Cache : op is WbMtoI, WbPushMtoI, WbFlush, or WbMtoS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_MISS.SHARED_RDINVOWN",
      EventDef::Encoding{.code = 0x60, .umask = 0x20, .msr_values = {0x00}},
      R"(Counts Number of Misses in HitMe Cache : SF/LLC HitS/F and op is RdInvOwn)",
      R"(Counts Number of Misses in HitMe Cache : SF/LLC HitS/F and op is RdInvOwn)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_MISS.NOTSHARED_RDINVOWN",
      EventDef::Encoding{.code = 0x60, .umask = 0x40, .msr_values = {0x00}},
      R"(Counts Number of Misses in HitMe Cache : No SF/LLC HitS/F and op is RdInvOwn)",
      R"(Counts Number of Misses in HitMe Cache : No SF/LLC HitS/F and op is RdInvOwn)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_MISS.READ_OR_INV",
      EventDef::Encoding{.code = 0x60, .umask = 0x80, .msr_values = {0x00}},
      R"(Counts Number of Misses in HitMe Cache : op is RdCode, RdData, RdDataMigratory, RdCur, RdInv, Inv*)",
      R"(Counts Number of Misses in HitMe Cache : op is RdCode, RdData, RdDataMigratory, RdCur, RdInv, Inv*)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_UPDATE.DEALLOCATE_RSPFWDI_LOC",
      EventDef::Encoding{.code = 0x61, .umask = 0x01, .msr_values = {0x00}},
      R"(Counts the number of Allocate/Update to HitMe Cache : op is RspIFwd or RspIFwdWb for a local request)",
      R"(Counts the number of Allocate/Update to HitMe Cache : op is RspIFwd or RspIFwdWb for a local request : Received RspFwdI* for a local request, but converted HitME$ to SF entry)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_UPDATE.RSPFWDI_REM",
      EventDef::Encoding{.code = 0x61, .umask = 0x02, .msr_values = {0x00}},
      R"(Counts the number of Allocate/Update to HitMe Cache : op is RspIFwd or RspIFwdWb for a remote request)",
      R"(Counts the number of Allocate/Update to HitMe Cache : op is RspIFwd or RspIFwdWb for a remote request : Updated HitME$ on RspFwdI* or local HitM/E received for a remote request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_UPDATE.SHARED",
      EventDef::Encoding{.code = 0x61, .umask = 0x04, .msr_values = {0x00}},
      R"(Counts the number of Allocate/Update to HitMe Cache : Update HitMe Cache to SHARed)",
      R"(Counts the number of Allocate/Update to HitMe Cache : Update HitMe Cache to SHARed)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_UPDATE.RDINVOWN",
      EventDef::Encoding{.code = 0x61, .umask = 0x08, .msr_values = {0x00}},
      R"(Counts the number of Allocate/Update to HitMe Cache : Update HitMe Cache on RdInvOwn even if not RspFwdI*)",
      R"(Counts the number of Allocate/Update to HitMe Cache : Update HitMe Cache on RdInvOwn even if not RspFwdI*)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_HITME_UPDATE.DEALLOCATE",
      EventDef::Encoding{.code = 0x61, .umask = 0x10, .msr_values = {0x00}},
      R"(Counts the number of Allocate/Update to HitMe Cache : Deallocate HitME$ on Reads without RspFwdI*)",
      R"(Counts the number of Allocate/Update to HitMe Cache : Deallocate HitME$ on Reads without RspFwdI*)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RSP_MISC.MTOI_RSPIFWDM",
      EventDef::Encoding{.code = 0x6b, .umask = 0x01, .msr_values = {0x00}},
      R"(Misc Snoop Responses Received : MtoI RspIFwdM)",
      R"(Misc Snoop Responses Received : MtoI RspIFwdM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RSP_MISC.MTOI_RSPDATAM",
      EventDef::Encoding{.code = 0x6b, .umask = 0x02, .msr_values = {0x00}},
      R"(Misc Snoop Responses Received : MtoI RspIDataM)",
      R"(Misc Snoop Responses Received : MtoI RspIDataM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RSP_MISC.RSPIFWDMPTL_HITSF",
      EventDef::Encoding{.code = 0x6b, .umask = 0x04, .msr_values = {0x00}},
      R"(Misc Snoop Responses Received : RspIFwdPtl Hit SF)",
      R"(Misc Snoop Responses Received : RspIFwdPtl Hit SF)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RSP_MISC.RSPIFWDMPTL_HITLLC",
      EventDef::Encoding{.code = 0x6b, .umask = 0x08, .msr_values = {0x00}},
      R"(Misc Snoop Responses Received : RspIFwdPtl Hit LLC)",
      R"(Misc Snoop Responses Received : RspIFwdPtl Hit LLC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RSP_MISC.PULLDATAPTL_HITSF",
      EventDef::Encoding{.code = 0x6b, .umask = 0x10, .msr_values = {0x00}},
      R"(Misc Snoop Responses Received : Pull Data Partial - Hit SF)",
      R"(Misc Snoop Responses Received : Pull Data Partial - Hit SF)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_SNOOP_RSP_MISC.PULLDATAPTL_HITLLC",
      EventDef::Encoding{.code = 0x6b, .umask = 0x20, .msr_values = {0x00}},
      R"(Misc Snoop Responses Received : Pull Data Partial - Hit LLC)",
      R"(Misc Snoop Responses Received : Pull Data Partial - Hit LLC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.EXTCMP",
      EventDef::Encoding{.code = 0x6d, .umask = 0x01, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.PULL",
      EventDef::Encoding{.code = 0x6d, .umask = 0x02, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.GO",
      EventDef::Encoding{.code = 0x6d, .umask = 0x04, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.GO_PULL",
      EventDef::Encoding{.code = 0x6d, .umask = 0x08, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.FAST_GO",
      EventDef::Encoding{.code = 0x6d, .umask = 0x10, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.FAST_GO_PULL",
      EventDef::Encoding{.code = 0x6d, .umask = 0x20, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.NOP",
      EventDef::Encoding{.code = 0x6d, .umask = 0x40, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO_OPC.IDLE_DUE_SUPPRESS",
      EventDef::Encoding{.code = 0x6d, .umask = 0x80, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO.HA_TOR_DEALLOC",
      EventDef::Encoding{.code = 0x6e, .umask = 0x01, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO.HA_SUPPRESS_NO_D2C",
      EventDef::Encoding{.code = 0x6e, .umask = 0x02, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_DIRECT_GO.HA_SUPPRESS_DRD",
      EventDef::Encoding{.code = 0x6e, .umask = 0x04, .msr_values = {0x00}},
      R"(Direct GO)",
      R"(Direct GO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_XPT_PREF.SENT0",
      EventDef::Encoding{.code = 0x6f, .umask = 0x01, .msr_values = {0x00}},
      R"(XPT Prefetches : Sent (on 0?))",
      R"(XPT Prefetches : Sent (on 0?) : Number of XPT prefetches sent)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_XPT_PREF.DROP0_NOCRD",
      EventDef::Encoding{.code = 0x6f, .umask = 0x04, .msr_values = {0x00}},
      R"(XPT Prefetches : Dropped (on 0?) - No Credits)",
      R"(XPT Prefetches : Dropped (on 0?) - No Credits : Number of XPT prefetches dropped due to lack of XPT AD egress credits)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_XPT_PREF.DROP0_CONFLICT",
      EventDef::Encoding{.code = 0x6f, .umask = 0x08, .msr_values = {0x00}},
      R"(XPT Prefetches : Dropped (on 0?) - Conflict)",
      R"(XPT Prefetches : Dropped (on 0?) - Conflict : Number of XPT prefetches dropped due to AD CMS write port contention)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_XPT_PREF.SENT1",
      EventDef::Encoding{.code = 0x6f, .umask = 0x10, .msr_values = {0x00}},
      R"(XPT Prefetches : Sent (on 1?))",
      R"(XPT Prefetches : Sent (on 1?) : Number of XPT prefetches sent)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_XPT_PREF.DROP1_NOCRD",
      EventDef::Encoding{.code = 0x6f, .umask = 0x40, .msr_values = {0x00}},
      R"(XPT Prefetches : Dropped (on 1?) - No Credits)",
      R"(XPT Prefetches : Dropped (on 1?) - No Credits : Number of XPT prefetches dropped due to lack of XPT AD egress credits)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_XPT_PREF.DROP1_CONFLICT",
      EventDef::Encoding{.code = 0x6f, .umask = 0x80, .msr_values = {0x00}},
      R"(XPT Prefetches : Dropped (on 1?) - Conflict)",
      R"(XPT Prefetches : Dropped (on 1?) - Conflict : Number of XPT prefetches dropped due to AD CMS write port contention)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_EGRESS_ORDERING.IV_SNOOPGO_UP",
      EventDef::Encoding{.code = 0xba, .umask = 0x01, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Up)",
      R"(Egress Blocking due to Ordering requirements : Up : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_EGRESS_ORDERING.IV_SNOOPGO_DN",
      EventDef::Encoding{.code = 0xba, .umask = 0x04, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Down)",
      R"(Egress Blocking due to Ordering requirements : Down : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OCCUPANCY.IPQ",
      EventDef::Encoding{.code = 0x11, .umask = 0x04, .msr_values = {0x00}},
      R"(Ingress (from CMS) Occupancy : IPQ)",
      R"(Ingress (from CMS) Occupancy : IPQ : Counts number of entries in the specified Ingress queue in each cycle.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OCCUPANCY.RRQ",
      EventDef::Encoding{.code = 0x11, .umask = 0x40, .msr_values = {0x00}},
      R"(Ingress (from CMS) Occupancy : RRQ)",
      R"(Ingress (from CMS) Occupancy : RRQ : Counts number of entries in the specified Ingress queue in each cycle.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OCCUPANCY.WBQ",
      EventDef::Encoding{.code = 0x11, .umask = 0x80, .msr_values = {0x00}},
      R"(Ingress (from CMS) Occupancy : WBQ)",
      R"(Ingress (from CMS) Occupancy : WBQ : Counts number of entries in the specified Ingress queue in each cycle.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.IRQ",
      EventDef::Encoding{.code = 0x13, .umask = 0x01, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : IRQ)",
      R"(Ingress (from CMS) Allocations : IRQ : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.IRQ_REJ",
      EventDef::Encoding{.code = 0x13, .umask = 0x02, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : IRQ Rejected)",
      R"(Ingress (from CMS) Allocations : IRQ Rejected : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.IPQ",
      EventDef::Encoding{.code = 0x13, .umask = 0x04, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : IPQ)",
      R"(Ingress (from CMS) Allocations : IPQ : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.PRQ",
      EventDef::Encoding{.code = 0x13, .umask = 0x10, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : PRQ)",
      R"(Ingress (from CMS) Allocations : PRQ : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.PRQ_REJ",
      EventDef::Encoding{.code = 0x13, .umask = 0x20, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : PRQ)",
      R"(Ingress (from CMS) Allocations : PRQ : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.RRQ",
      EventDef::Encoding{.code = 0x13, .umask = 0x40, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : RRQ)",
      R"(Ingress (from CMS) Allocations : RRQ : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_INSERTS.WBQ",
      EventDef::Encoding{.code = 0x13, .umask = 0x80, .msr_values = {0x00}},
      R"(Ingress (from CMS) Allocations : WBQ)",
      R"(Ingress (from CMS) Allocations : WBQ : Counts number of allocations per cycle into the specified Ingress queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x18, .umask = 0x01, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : AD REQ on VN0)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : AD REQ on VN0 : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x18, .umask = 0x02, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : AD RSP on VN0)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : AD RSP on VN0 : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x18, .umask = 0x04, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL RSP on VN0)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL RSP on VN0 : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.BL_WB_VN0",
      EventDef::Encoding{.code = 0x18, .umask = 0x08, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL WB on VN0)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL WB on VN0 : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x18, .umask = 0x10, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL NCB on VN0)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL NCB on VN0 : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x18, .umask = 0x20, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL NCS on VN0)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : BL NCS on VN0 : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.AK_NON_UPI",
      EventDef::Encoding{.code = 0x18, .umask = 0x40, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : Non UPI AK Request)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : Non UPI AK Request : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ0_REJECT.IV_NON_UPI",
      EventDef::Encoding{.code = 0x18, .umask = 0x80, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 0 : Non UPI IV Request)",
      R"(IRQ Requests (from CMS) Rejected - Set 0 : Non UPI IV Request : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.PA_MATCH",
      EventDef::Encoding{.code = 0x19, .umask = 0x80, .msr_values = {0x00}},
      R"(Ingress (from CMS) Request Queue Rejects; PhyAddr Match)",
      R"(Ingress (from CMS) Request Queue Rejects; PhyAddr Match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.ANY0",
      EventDef::Encoding{.code = 0x19, .umask = 0x01, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : ANY0)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : ANY0 : Any condition listed in the IRQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.HA",
      EventDef::Encoding{.code = 0x19, .umask = 0x02, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : HA)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : HA)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.LLC_VICTIM",
      EventDef::Encoding{.code = 0x19, .umask = 0x04, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : LLC Victim)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : LLC Victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.SF_VICTIM",
      EventDef::Encoding{.code = 0x19, .umask = 0x08, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : SF Victim)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : SF Victim : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.VICTIM",
      EventDef::Encoding{.code = 0x19, .umask = 0x10, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : Victim)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : Victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x19, .umask = 0x20, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : LLC or SF Way)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : LLC or SF Way : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IRQ1_REJECT.ALLOW_SNP",
      EventDef::Encoding{.code = 0x19, .umask = 0x40, .msr_values = {0x00}},
      R"(IRQ Requests (from CMS) Rejected - Set 1 : Allow Snoop)",
      R"(IRQ Requests (from CMS) Rejected - Set 1 : Allow Snoop)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x20, .umask = 0x01, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : AD REQ on VN0)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : AD REQ on VN0 : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x20, .umask = 0x02, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : AD RSP on VN0)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : AD RSP on VN0 : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x20, .umask = 0x04, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL RSP on VN0)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL RSP on VN0 : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.BL_WB_VN0",
      EventDef::Encoding{.code = 0x20, .umask = 0x08, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL WB on VN0)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL WB on VN0 : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x20, .umask = 0x10, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL NCB on VN0)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL NCB on VN0 : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x20, .umask = 0x20, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL NCS on VN0)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : BL NCS on VN0 : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.AK_NON_UPI",
      EventDef::Encoding{.code = 0x20, .umask = 0x40, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : Non UPI AK Request)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : Non UPI AK Request : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ0_REJECT.IV_NON_UPI",
      EventDef::Encoding{.code = 0x20, .umask = 0x80, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 0 : Non UPI IV Request)",
      R"(PRQ Requests (from CMS) Rejected - Set 0 : Non UPI IV Request : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.ANY0",
      EventDef::Encoding{.code = 0x21, .umask = 0x01, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : ANY0)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : ANY0 : Any condition listed in the PRQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.HA",
      EventDef::Encoding{.code = 0x21, .umask = 0x02, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : HA)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : HA)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.LLC_VICTIM",
      EventDef::Encoding{.code = 0x21, .umask = 0x04, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : LLC Victim)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : LLC Victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.SF_VICTIM",
      EventDef::Encoding{.code = 0x21, .umask = 0x08, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : SF Victim)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : SF Victim : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.VICTIM",
      EventDef::Encoding{.code = 0x21, .umask = 0x10, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : Victim)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : Victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x21, .umask = 0x20, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : LLC OR SF Way)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : LLC OR SF Way : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.ALLOW_SNP",
      EventDef::Encoding{.code = 0x21, .umask = 0x40, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : Allow Snoop)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : Allow Snoop)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_PRQ1_REJECT.PA_MATCH",
      EventDef::Encoding{.code = 0x21, .umask = 0x80, .msr_values = {0x00}},
      R"(PRQ Requests (from CMS) Rejected - Set 1 : PhyAddr Match)",
      R"(PRQ Requests (from CMS) Rejected - Set 1 : PhyAddr Match : Address match with an outstanding request that was rejected.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x22, .umask = 0x01, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : AD REQ on VN0)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : AD REQ on VN0 : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x22, .umask = 0x02, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : AD RSP on VN0)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : AD RSP on VN0 : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x22, .umask = 0x04, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL RSP on VN0)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL RSP on VN0 : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.BL_WB_VN0",
      EventDef::Encoding{.code = 0x22, .umask = 0x08, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL WB on VN0)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL WB on VN0 : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x22, .umask = 0x10, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL NCB on VN0)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL NCB on VN0 : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x22, .umask = 0x20, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL NCS on VN0)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : BL NCS on VN0 : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.AK_NON_UPI",
      EventDef::Encoding{.code = 0x22, .umask = 0x40, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : Non UPI AK Request)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : Non UPI AK Request : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ0_REJECT.IV_NON_UPI",
      EventDef::Encoding{.code = 0x22, .umask = 0x80, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 0 : Non UPI IV Request)",
      R"(IPQ Requests (from CMS) Rejected - Set 0 : Non UPI IV Request : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.ANY0",
      EventDef::Encoding{.code = 0x23, .umask = 0x01, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : ANY0)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : ANY0 : Any condition listed in the IPQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.HA",
      EventDef::Encoding{.code = 0x23, .umask = 0x02, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : HA)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : HA)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.LLC_VICTIM",
      EventDef::Encoding{.code = 0x23, .umask = 0x04, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : LLC Victim)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : LLC Victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.SF_VICTIM",
      EventDef::Encoding{.code = 0x23, .umask = 0x08, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : SF Victim)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : SF Victim : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.VICTIM",
      EventDef::Encoding{.code = 0x23, .umask = 0x10, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : Victim)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : Victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x23, .umask = 0x20, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : LLC OR SF Way)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : LLC OR SF Way : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.ALLOW_SNP",
      EventDef::Encoding{.code = 0x23, .umask = 0x40, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : Allow Snoop)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : Allow Snoop)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_IPQ1_REJECT.PA_MATCH",
      EventDef::Encoding{.code = 0x23, .umask = 0x80, .msr_values = {0x00}},
      R"(IPQ Requests (from CMS) Rejected - Set 1 : PhyAddr Match)",
      R"(IPQ Requests (from CMS) Rejected - Set 1 : PhyAddr Match : Address match with an outstanding request that was rejected.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x24, .umask = 0x01, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : AD REQ on VN0)",
      R"(ISMQ Rejects - Set 0 : AD REQ on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x24, .umask = 0x02, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : AD RSP on VN0)",
      R"(ISMQ Rejects - Set 0 : AD RSP on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x24, .umask = 0x04, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : BL RSP on VN0)",
      R"(ISMQ Rejects - Set 0 : BL RSP on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.BL_WB_VN0",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : BL WB on VN0)",
      R"(ISMQ Rejects - Set 0 : BL WB on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : BL NCB on VN0)",
      R"(ISMQ Rejects - Set 0 : BL NCB on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x24, .umask = 0x20, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : BL NCS on VN0)",
      R"(ISMQ Rejects - Set 0 : BL NCS on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.AK_NON_UPI",
      EventDef::Encoding{.code = 0x24, .umask = 0x40, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : Non UPI AK Request)",
      R"(ISMQ Rejects - Set 0 : Non UPI AK Request : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_REJECT.IV_NON_UPI",
      EventDef::Encoding{.code = 0x24, .umask = 0x80, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 0 : Non UPI IV Request)",
      R"(ISMQ Rejects - Set 0 : Non UPI IV Request : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ1_REJECT.ANY0",
      EventDef::Encoding{.code = 0x25, .umask = 0x01, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 1 : ANY0)",
      R"(ISMQ Rejects - Set 1 : ANY0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : Any condition listed in the ISMQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ1_REJECT.HA",
      EventDef::Encoding{.code = 0x25, .umask = 0x02, .msr_values = {0x00}},
      R"(ISMQ Rejects - Set 1 : HA)",
      R"(ISMQ Rejects - Set 1 : HA : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x26, .umask = 0x01, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : AD REQ on VN0)",
      R"(RRQ Rejects - Set 0 : AD REQ on VN0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x26, .umask = 0x02, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : AD RSP on VN0)",
      R"(RRQ Rejects - Set 0 : AD RSP on VN0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x26, .umask = 0x04, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : BL RSP on VN0)",
      R"(RRQ Rejects - Set 0 : BL RSP on VN0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.BL_WB_VN0",
      EventDef::Encoding{.code = 0x26, .umask = 0x08, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : BL WB on VN0)",
      R"(RRQ Rejects - Set 0 : BL WB on VN0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x26, .umask = 0x10, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : BL NCB on VN0)",
      R"(RRQ Rejects - Set 0 : BL NCB on VN0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x26, .umask = 0x20, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : BL NCS on VN0)",
      R"(RRQ Rejects - Set 0 : BL NCS on VN0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.AK_NON_UPI",
      EventDef::Encoding{.code = 0x26, .umask = 0x40, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : Non UPI AK Request)",
      R"(RRQ Rejects - Set 0 : Non UPI AK Request : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ0_REJECT.IV_NON_UPI",
      EventDef::Encoding{.code = 0x26, .umask = 0x80, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 0 : Non UPI IV Request)",
      R"(RRQ Rejects - Set 0 : Non UPI IV Request : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.ANY0",
      EventDef::Encoding{.code = 0x27, .umask = 0x01, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : ANY0)",
      R"(RRQ Rejects - Set 1 : ANY0 : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : Any condition listed in the RRQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.HA",
      EventDef::Encoding{.code = 0x27, .umask = 0x02, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : HA)",
      R"(RRQ Rejects - Set 1 : HA : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.LLC_VICTIM",
      EventDef::Encoding{.code = 0x27, .umask = 0x04, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : LLC Victim)",
      R"(RRQ Rejects - Set 1 : LLC Victim : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.SF_VICTIM",
      EventDef::Encoding{.code = 0x27, .umask = 0x08, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : SF Victim)",
      R"(RRQ Rejects - Set 1 : SF Victim : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.VICTIM",
      EventDef::Encoding{.code = 0x27, .umask = 0x10, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : Victim)",
      R"(RRQ Rejects - Set 1 : Victim : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x27, .umask = 0x20, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : LLC OR SF Way)",
      R"(RRQ Rejects - Set 1 : LLC OR SF Way : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.ALLOW_SNP",
      EventDef::Encoding{.code = 0x27, .umask = 0x40, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : Allow Snoop)",
      R"(RRQ Rejects - Set 1 : Allow Snoop : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_RRQ1_REJECT.PA_MATCH",
      EventDef::Encoding{.code = 0x27, .umask = 0x80, .msr_values = {0x00}},
      R"(RRQ Rejects - Set 1 : PhyAddr Match)",
      R"(RRQ Rejects - Set 1 : PhyAddr Match : Number of times a transaction flowing through the RRQ (Remote Response Queue) had to retry. : Address match with an outstanding request that was rejected.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x28, .umask = 0x01, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : AD REQ on VN0)",
      R"(WBQ Rejects - Set 0 : AD REQ on VN0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x28, .umask = 0x02, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : AD RSP on VN0)",
      R"(WBQ Rejects - Set 0 : AD RSP on VN0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x28, .umask = 0x04, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : BL RSP on VN0)",
      R"(WBQ Rejects - Set 0 : BL RSP on VN0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.BL_WB_VN0",
      EventDef::Encoding{.code = 0x28, .umask = 0x08, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : BL WB on VN0)",
      R"(WBQ Rejects - Set 0 : BL WB on VN0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x28, .umask = 0x10, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : BL NCB on VN0)",
      R"(WBQ Rejects - Set 0 : BL NCB on VN0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x28, .umask = 0x20, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : BL NCS on VN0)",
      R"(WBQ Rejects - Set 0 : BL NCS on VN0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.AK_NON_UPI",
      EventDef::Encoding{.code = 0x28, .umask = 0x40, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : Non UPI AK Request)",
      R"(WBQ Rejects - Set 0 : Non UPI AK Request : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ0_REJECT.IV_NON_UPI",
      EventDef::Encoding{.code = 0x28, .umask = 0x80, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 0 : Non UPI IV Request)",
      R"(WBQ Rejects - Set 0 : Non UPI IV Request : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.ANY0",
      EventDef::Encoding{.code = 0x29, .umask = 0x01, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : ANY0)",
      R"(WBQ Rejects - Set 1 : ANY0 : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : Any condition listed in the WBQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.HA",
      EventDef::Encoding{.code = 0x29, .umask = 0x02, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : HA)",
      R"(WBQ Rejects - Set 1 : HA : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.LLC_VICTIM",
      EventDef::Encoding{.code = 0x29, .umask = 0x04, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : LLC Victim)",
      R"(WBQ Rejects - Set 1 : LLC Victim : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.SF_VICTIM",
      EventDef::Encoding{.code = 0x29, .umask = 0x08, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : SF Victim)",
      R"(WBQ Rejects - Set 1 : SF Victim : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.VICTIM",
      EventDef::Encoding{.code = 0x29, .umask = 0x10, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : Victim)",
      R"(WBQ Rejects - Set 1 : Victim : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x29, .umask = 0x20, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : LLC OR SF Way)",
      R"(WBQ Rejects - Set 1 : LLC OR SF Way : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.ALLOW_SNP",
      EventDef::Encoding{.code = 0x29, .umask = 0x40, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : Allow Snoop)",
      R"(WBQ Rejects - Set 1 : Allow Snoop : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_WBQ1_REJECT.PA_MATCH",
      EventDef::Encoding{.code = 0x29, .umask = 0x80, .msr_values = {0x00}},
      R"(WBQ Rejects - Set 1 : PhyAddr Match)",
      R"(WBQ Rejects - Set 1 : PhyAddr Match : Number of times a transaction flowing through the WBQ (Writeback Queue) had to retry. : Address match with an outstanding request that was rejected.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x2a, .umask = 0x01, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : AD REQ on VN0)",
      R"(Request Queue Retries - Set 0 : AD REQ on VN0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x2a, .umask = 0x02, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : AD RSP on VN0)",
      R"(Request Queue Retries - Set 0 : AD RSP on VN0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x2a, .umask = 0x04, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : BL RSP on VN0)",
      R"(Request Queue Retries - Set 0 : BL RSP on VN0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.BL_WB_VN0",
      EventDef::Encoding{.code = 0x2a, .umask = 0x08, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : BL WB on VN0)",
      R"(Request Queue Retries - Set 0 : BL WB on VN0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x2a, .umask = 0x10, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : BL NCB on VN0)",
      R"(Request Queue Retries - Set 0 : BL NCB on VN0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x2a, .umask = 0x20, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : BL NCS on VN0)",
      R"(Request Queue Retries - Set 0 : BL NCS on VN0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.AK_NON_UPI",
      EventDef::Encoding{.code = 0x2a, .umask = 0x40, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : Non UPI AK Request)",
      R"(Request Queue Retries - Set 0 : Non UPI AK Request : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q0_RETRY.IV_NON_UPI",
      EventDef::Encoding{.code = 0x2a, .umask = 0x80, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 0 : Non UPI IV Request)",
      R"(Request Queue Retries - Set 0 : Non UPI IV Request : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.ANY0",
      EventDef::Encoding{.code = 0x2b, .umask = 0x01, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : ANY0)",
      R"(Request Queue Retries - Set 1 : ANY0 : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : Any condition listed in the WBQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.HA",
      EventDef::Encoding{.code = 0x2b, .umask = 0x02, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : HA)",
      R"(Request Queue Retries - Set 1 : HA : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.LLC_VICTIM",
      EventDef::Encoding{.code = 0x2b, .umask = 0x04, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : LLC Victim)",
      R"(Request Queue Retries - Set 1 : LLC Victim : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.SF_VICTIM",
      EventDef::Encoding{.code = 0x2b, .umask = 0x08, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : SF Victim)",
      R"(Request Queue Retries - Set 1 : SF Victim : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.VICTIM",
      EventDef::Encoding{.code = 0x2b, .umask = 0x10, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : Victim)",
      R"(Request Queue Retries - Set 1 : Victim : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x2b, .umask = 0x20, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : LLC OR SF Way)",
      R"(Request Queue Retries - Set 1 : LLC OR SF Way : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.ALLOW_SNP",
      EventDef::Encoding{.code = 0x2b, .umask = 0x40, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : Allow Snoop)",
      R"(Request Queue Retries - Set 1 : Allow Snoop : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_REQ_Q1_RETRY.PA_MATCH",
      EventDef::Encoding{.code = 0x2b, .umask = 0x80, .msr_values = {0x00}},
      R"(Request Queue Retries - Set 1 : PhyAddr Match)",
      R"(Request Queue Retries - Set 1 : PhyAddr Match : REQUESTQ includes:  IRQ, PRQ, IPQ, RRQ, WBQ (everything except for ISMQ) : Address match with an outstanding request that was rejected.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x01, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : AD REQ on VN0)",
      R"(ISMQ Retries - Set 0 : AD REQ on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x02, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : AD RSP on VN0)",
      R"(ISMQ Retries - Set 0 : AD RSP on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x04, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : BL RSP on VN0)",
      R"(ISMQ Retries - Set 0 : BL RSP on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.BL_WB_VN0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x08, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : BL WB on VN0)",
      R"(ISMQ Retries - Set 0 : BL WB on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x10, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : BL NCB on VN0)",
      R"(ISMQ Retries - Set 0 : BL NCB on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x20, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : BL NCS on VN0)",
      R"(ISMQ Retries - Set 0 : BL NCS on VN0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.AK_NON_UPI",
      EventDef::Encoding{.code = 0x2c, .umask = 0x40, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : Non UPI AK Request)",
      R"(ISMQ Retries - Set 0 : Non UPI AK Request : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ0_RETRY.IV_NON_UPI",
      EventDef::Encoding{.code = 0x2c, .umask = 0x80, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 0 : Non UPI IV Request)",
      R"(ISMQ Retries - Set 0 : Non UPI IV Request : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ1_RETRY.ANY0",
      EventDef::Encoding{.code = 0x2d, .umask = 0x01, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 1 : ANY0)",
      R"(ISMQ Retries - Set 1 : ANY0 : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores. : Any condition listed in the ISMQ0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_ISMQ1_RETRY.HA",
      EventDef::Encoding{.code = 0x2d, .umask = 0x02, .msr_values = {0x00}},
      R"(ISMQ Retries - Set 1 : HA)",
      R"(ISMQ Retries - Set 1 : HA : Number of times a transaction flowing through the ISMQ had to retry.  Transaction pass through the ISMQ as responses for requests that already exist in the Cbo.  Some examples include: when data is returned or when snoop responses come back from the cores.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.AD_REQ_VN0",
      EventDef::Encoding{.code = 0x2e, .umask = 0x01, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : AD REQ on VN0)",
      R"(Other Retries - Set 0 : AD REQ on VN0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : No AD VN0 credit for generating a request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.AD_RSP_VN0",
      EventDef::Encoding{.code = 0x2e, .umask = 0x02, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : AD RSP on VN0)",
      R"(Other Retries - Set 0 : AD RSP on VN0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : No AD VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.BL_RSP_VN0",
      EventDef::Encoding{.code = 0x2e, .umask = 0x04, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : BL RSP on VN0)",
      R"(Other Retries - Set 0 : BL RSP on VN0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : No BL VN0 credit for generating a response)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.BL_WB_VN0",
      EventDef::Encoding{.code = 0x2e, .umask = 0x08, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : BL WB on VN0)",
      R"(Other Retries - Set 0 : BL WB on VN0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : No BL VN0 credit for generating a writeback)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.BL_NCB_VN0",
      EventDef::Encoding{.code = 0x2e, .umask = 0x10, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : BL NCB on VN0)",
      R"(Other Retries - Set 0 : BL NCB on VN0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : No BL VN0 credit for NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.BL_NCS_VN0",
      EventDef::Encoding{.code = 0x2e, .umask = 0x20, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : BL NCS on VN0)",
      R"(Other Retries - Set 0 : BL NCS on VN0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : No BL VN0 credit for NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.AK_NON_UPI",
      EventDef::Encoding{.code = 0x2e, .umask = 0x40, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : Non UPI AK Request)",
      R"(Other Retries - Set 0 : Non UPI AK Request : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : Can't inject AK ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER0_RETRY.IV_NON_UPI",
      EventDef::Encoding{.code = 0x2e, .umask = 0x80, .msr_values = {0x00}},
      R"(Other Retries - Set 0 : Non UPI IV Request)",
      R"(Other Retries - Set 0 : Non UPI IV Request : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : Can't inject IV ring message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.ANY0",
      EventDef::Encoding{.code = 0x2f, .umask = 0x01, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : ANY0)",
      R"(Other Retries - Set 1 : ANY0 : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : Any condition listed in the Other0 Reject counter was true)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.HA",
      EventDef::Encoding{.code = 0x2f, .umask = 0x02, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : HA)",
      R"(Other Retries - Set 1 : HA : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.LLC_VICTIM",
      EventDef::Encoding{.code = 0x2f, .umask = 0x04, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : LLC Victim)",
      R"(Other Retries - Set 1 : LLC Victim : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.SF_VICTIM",
      EventDef::Encoding{.code = 0x2f, .umask = 0x08, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : SF Victim)",
      R"(Other Retries - Set 1 : SF Victim : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : Requests did not generate Snoop filter victim)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.VICTIM",
      EventDef::Encoding{.code = 0x2f, .umask = 0x10, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : Victim)",
      R"(Other Retries - Set 1 : Victim : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.LLC_OR_SF_WAY",
      EventDef::Encoding{.code = 0x2f, .umask = 0x20, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : LLC OR SF Way)",
      R"(Other Retries - Set 1 : LLC OR SF Way : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : Way conflict with another request that caused the reject)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.ALLOW_SNP",
      EventDef::Encoding{.code = 0x2f, .umask = 0x40, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : Allow Snoop)",
      R"(Other Retries - Set 1 : Allow Snoop : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_RxC_OTHER1_RETRY.PA_MATCH",
      EventDef::Encoding{.code = 0x2f, .umask = 0x80, .msr_values = {0x00}},
      R"(Other Retries - Set 1 : PhyAddr Match)",
      R"(Other Retries - Set 1 : PhyAddr Match : Retry Queue Inserts of Transactions that were already in another Retry Q (sub-events encode the reason for the next reject) : Address match with an outstanding request that was rejected.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.REMOTE_ONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x11, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Single Snoop Target from Remote)",
      R"(Core Cross Snoops Issued : Single Snoop Target from Remote : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.EXT_ONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x21, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Single External Snoops)",
      R"(Core Cross Snoops Issued : Single External Snoops : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.CORE_ONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x41, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Single Core Requests)",
      R"(Core Cross Snoops Issued : Single Core Requests : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.EVICT_ONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x81, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Single Eviction)",
      R"(Core Cross Snoops Issued : Single Eviction : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.ANY_ONE",
      EventDef::Encoding{.code = 0x33, .umask = 0xf1, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Any Single Snoop)",
      R"(Core Cross Snoops Issued : Any Single Snoop : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.REMOTE_GTONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x12, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Multiple Snoop Targets from Remote)",
      R"(Core Cross Snoops Issued : Multiple Snoop Targets from Remote : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.EXT_GTONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x22, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Multiple External Snoops)",
      R"(Core Cross Snoops Issued : Multiple External Snoops : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.CORE_GTONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x42, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Multiple Core Requests)",
      R"(Core Cross Snoops Issued : Multiple Core Requests : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.EVICT_GTONE",
      EventDef::Encoding{.code = 0x33, .umask = 0x82, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Multiple Eviction)",
      R"(Core Cross Snoops Issued : Multiple Eviction : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_CORE_SNP.ANY_GTONE",
      EventDef::Encoding{.code = 0x33, .umask = 0xf2, .msr_values = {0x00}},
      R"(Core Cross Snoops Issued : Any Cycle with Multiple Snoops)",
      R"(Core Cross Snoops Issued : Any Cycle with Multiple Snoops : Counts the number of transactions that trigger a configurable number of cross snoops.  Cores are snooped if the transaction looks up the cache and determines that it is necessary based on the operation type and what CoreValid bits are set.  For example, if 2 CV bits are set on a data read, the cores must have the data in S state so it is not necessary to snoop them.  However, if only 1 CV bit is set the core my have modified the data.  If the transaction was an RFO, it would need to invalidate the lines.  This event can be filtered based on who triggered the initial snoop(s).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.I",
      EventDef::Encoding{.code = 0x34, .umask = 0x01, .msr_values = {0x00}},
      R"(Cache Lookups : I State)",
      R"(Cache Lookups : I State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Miss)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.SF_S",
      EventDef::Encoding{.code = 0x34, .umask = 0x02, .msr_values = {0x00}},
      R"(Cache Lookups : SnoopFilter - S State)",
      R"(Cache Lookups : SnoopFilter - S State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : SF Hit Shared State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.SF_E",
      EventDef::Encoding{.code = 0x34, .umask = 0x04, .msr_values = {0x00}},
      R"(Cache Lookups : SnoopFilter - E State)",
      R"(Cache Lookups : SnoopFilter - E State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : SF Hit Exclusive State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.SF_H",
      EventDef::Encoding{.code = 0x34, .umask = 0x08, .msr_values = {0x00}},
      R"(Cache Lookups : SnoopFilter - H State)",
      R"(Cache Lookups : SnoopFilter - H State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : SF Hit HitMe State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.S",
      EventDef::Encoding{.code = 0x34, .umask = 0x10, .msr_values = {0x00}},
      R"(Cache Lookups : S State)",
      R"(Cache Lookups : S State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Hit Shared State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.E",
      EventDef::Encoding{.code = 0x34, .umask = 0x20, .msr_values = {0x00}},
      R"(Cache Lookups : E State)",
      R"(Cache Lookups : E State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Hit Exclusive State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.M",
      EventDef::Encoding{.code = 0x34, .umask = 0x40, .msr_values = {0x00}},
      R"(Cache Lookups : M State)",
      R"(Cache Lookups : M State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Hit Modified State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.F",
      EventDef::Encoding{.code = 0x34, .umask = 0x80, .msr_values = {0x00}},
      R"(Cache Lookups : F State)",
      R"(Cache Lookups : F State : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Hit Forward State)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.RFO",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : RFO Requests)",
      R"(Cache Lookups : RFO Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote RFO transactions to the LLC.  This includes RFO prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.ALL",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Any Request)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state.; Filters for any transaction originating from the IPQ or IRQ.  This does not include lookups originating from the ISMQ.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.DATA_RD",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Data Read Request)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.FLUSH_INV",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Flush or Invalidate Requests)",
      R"(Cache Lookups : Flush : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.CODE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : CRd Requests)",
      R"(Cache Lookups : CRd Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote CRd transactions to the LLC.  This includes CRd prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCALLY_HOMED_ADDRESS",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Transactions homed locally)",
      R"(Cache Lookups : Transactions homed locally : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Transaction whose address resides in the local MC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTELY_HOMED_ADDRESS",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Transactions homed remotely)",
      R"(Cache Lookups : Transactions homed remotely : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Transaction whose address resides in a remote MC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_OTHER",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Filters Requests for those that write info into the cache that come from a remote socket)",
      R"(Cache Lookups : Write Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Writeback transactions from L2 to the LLC  This includes all write transactions -- both Cacheable and UC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_FLUSH_INV",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Flush or Invalidate requests that come from a Remote socket.)",
      R"(Cache Lookups : Flush : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_DATA_RD",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Data Read Requests that come from a Remote socket)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_RFO",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : RFO Requests that come from a Remote socket.)",
      R"(Cache Lookups : RFO Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote RFO transactions to the LLC.  This includes RFO prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_CODE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : CRd Requests that come from a Remote socket.)",
      R"(Cache Lookups : CRd Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote CRd transactions to the LLC.  This includes CRd prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_SNP",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Snoop Requests from a Remote Socket)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state.; Filters for any transaction originating from the IPQ or IRQ.  This does not include lookups originating from the ISMQ.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_FLUSH_INV",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Flush or Invalidate Requests that come from the local socket (usually the core))",
      R"(Cache Lookups : Flush : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_DATA_RD",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Data Read Request that come from the local socket (usually the core))",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_RFO",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : RFO Requests that come from the local socket (usually the core))",
      R"(Cache Lookups : RFO Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote RFO transactions to the LLC.  This includes RFO prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_CODE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : CRd Requests that come from the local socket (usually the core))",
      R"(Cache Lookups : CRd Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote CRd transactions to the LLC.  This includes CRd prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_DMND_DATA_RD",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Demand Data Reads that come from the local socket (usually the core))",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_DMND_RFO",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Demand RFO Requests that come from the local socket (usually the core))",
      R"(Cache Lookups : RFO Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote RFO transactions to the LLC.  This includes RFO prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_DMND_CODE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Demand CRd Requests that come from the local socket (usually the core))",
      R"(Cache Lookups : CRd Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote CRd transactions to the LLC.  This includes CRd prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_PF_DATA_RD",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Data Read Prefetches that come from the local socket (usually the core))",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_PF_RFO",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : RFO Prefetches that come from the local socket (usually the core))",
      R"(Cache Lookups : RFO Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote RFO transactions to the LLC.  This includes RFO prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_PF_CODE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : CRd Prefetches that come from the local socket (usually the core))",
      R"(Cache Lookups : CRd Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote CRd transactions to the LLC.  This includes CRd prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_LLC_PF",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Prefetch requests to the LLC that come from the local socket (usually the core))",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_PF",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache and Snoop Filter Lookups; Data Read Prefetches that come from the local socket (usually the core))",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.   CHAFilter0[24:21,17] bits correspond to [FMESI] state. Read transactions)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.SNPS_FROM_REM",
      EventDef::Encoding{.code = 0x35, .umask = 0x08, .msr_values = {0x00}},
      R"(TOR Inserts; All Snoops from Remote)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. All snoops to this LLC that came from remote sockets.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.ALL",
      EventDef::Encoding{.code = 0x35, .umask = 0xff, .msr_values = {0x00}},
      R"(TOR Inserts : All)",
      R"(TOR Inserts : All : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IO_MISS_RFO",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts; RFO misses from local IO)",
      R"(TOR Inserts : RFOs issued by IO Devices that missed the LLC : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IRQ_IA",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : IRQ - iA)",
      R"(TOR Inserts : IRQ - iA : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : From an iA Core)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.EVICT",
      EventDef::Encoding{.code = 0x35, .umask = 0x02, .msr_values = {0x00}},
      R"(TOR Inserts : SF/LLC Evictions)",
      R"(TOR Inserts : SF/LLC Evictions : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : TOR allocation occurred as a result of SF/LLC evictions (came from the ISMQ))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.PRQ_IOSF",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts : PRQ - IOSF)",
      R"(TOR Inserts : PRQ - IOSF : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : From a PCIe Device)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IPQ",
      EventDef::Encoding{.code = 0x35, .umask = 0x08, .msr_values = {0x00}},
      R"(TOR Inserts : IPQ)",
      R"(TOR Inserts : IPQ : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IRQ_NON_IA",
      EventDef::Encoding{.code = 0x35, .umask = 0x10, .msr_values = {0x00}},
      R"(TOR Inserts : IRQ - Non iA)",
      R"(TOR Inserts : IRQ - Non iA : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.PRQ_NON_IOSF",
      EventDef::Encoding{.code = 0x35, .umask = 0x20, .msr_values = {0x00}},
      R"(TOR Inserts : PRQ - Non IOSF)",
      R"(TOR Inserts : PRQ - Non IOSF : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.RRQ",
      EventDef::Encoding{.code = 0x35, .umask = 0x40, .msr_values = {0x00}},
      R"(TOR Inserts : RRQ)",
      R"(TOR Inserts : RRQ : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.WBQ",
      EventDef::Encoding{.code = 0x35, .umask = 0x80, .msr_values = {0x00}},
      R"(TOR Inserts : WBQ)",
      R"(TOR Inserts : WBQ : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.LOC_IO",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts : All from Local IO)",
      R"(TOR Inserts : All from Local IO : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : All locally generated IO traffic)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.LOC_IA",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : All from Local iA)",
      R"(TOR Inserts : All from Local iA : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : All locally initiated requests from iA Cores)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.LOC_ALL",
      EventDef::Encoding{.code = 0x35, .umask = 0x05, .msr_values = {0x00}},
      R"(TOR Inserts : All from Local iA and IO)",
      R"(TOR Inserts : All from Local iA and IO : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : All locally initiated requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.REM_SNPS",
      EventDef::Encoding{.code = 0x35, .umask = 0x08, .msr_values = {0x00}},
      R"(TOR Inserts : All Snoops from Remote)",
      R"(TOR Inserts : All Snoops from Remote : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : All snoops to this LLC that came from remote sockets)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.REM_ALL",
      EventDef::Encoding{.code = 0x35, .umask = 0xC8, .msr_values = {0x00}},
      R"(TOR Inserts : All from Remote)",
      R"(TOR Inserts : All from Remote : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent. : All remote requests (e.g. snoops, writebacks) that came from remote sockets)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.HIT",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just Hits)",
      R"(TOR Inserts : Just Hits : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.MISS",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just Misses)",
      R"(TOR Inserts : Just Misses : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.MMCFG",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : MMCFG Access)",
      R"(TOR Inserts : MMCFG Access : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.MMIO",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : MMIO Access)",
      R"(TOR Inserts : MMIO Access : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.LOCAL_TGT",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just Local Targets)",
      R"(TOR Inserts : Just Local Targets : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.REMOTE_TGT",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just Remote Targets)",
      R"(TOR Inserts : Just Remote Targets : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.MATCH_OPC",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Match the Opcode in b[29:19] of the extended umask field)",
      R"(TOR Inserts : Match the Opcode in b[29:19] of the extended umask field : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.PREMORPH_OPC",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Match the PreMorphed Opcode in b[29:19] of the extended umask field)",
      R"(TOR Inserts : Match the PreMorphed Opcode in b[29:19] of the extended umask field : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.NEARMEM",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just NearMem)",
      R"(TOR Inserts : Just NearMem : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.NOT_NEARMEM",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just NotNearMem)",
      R"(TOR Inserts : Just NotNearMem : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.NONCOH",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just NonCoherent)",
      R"(TOR Inserts : Just NonCoherent : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.ISOC",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : Just ISOC)",
      R"(TOR Inserts : Just ISOC : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_HIT_DRD_OPT",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd Opt hits from local IA)",
      R"(TOR Inserts; Data read opt from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_HIT_DRD_OPT_PREF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd Opt Pref hits from local IA)",
      R"(TOR Inserts; Data read opt prefetch from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_OPT",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd Opt misses from local IA)",
      R"(TOR Inserts; Data read opt from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_OPT_PREF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd Opt Pref misses from local IA)",
      R"(TOR Inserts; Data read opt prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IO_HIT_RFO",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts; RFO hits from local IO)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IO_RFO",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts; RFO from local IO)",
      R"(TOR Inserts : RFOs issued by IO Devices : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_DRD",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd from local IA)",
      R"(TOR Inserts; Data read from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_DRD_OPT",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd Opt from local IA)",
      R"(TOR Inserts; Data read opt from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_DRD_OPT_PREF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; DRd Opt Pref from local IA)",
      R"(TOR Inserts; Data read opt prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_CRD_PREF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; CRd Pref from local IA)",
      R"(TOR Inserts; Code read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_CLFLUSHOPT",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts;CLFlushOpt from Local IA)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.; CLFlushOpt events that are initiated from the Core)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_ITOM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts;ItoM from Local IA)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.; ItoM events that are initiated from the Core)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.SNPS_FROM_REM",
      EventDef::Encoding{.code = 0x36, .umask = 0x08, .msr_values = {0x00}},
      R"(TOR Occupancy; All Snoops from Remote)",
      R"(For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   All snoops to this LLC that came from remote sockets.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.ALL",
      EventDef::Encoding{.code = 0x36, .umask = 0xff, .msr_values = {0x00}},
      R"(TOR Occupancy : All)",
      R"(TOR Occupancy : All : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_CRD",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; CRd hits from local IA)",
      R"(TOR Occupancy; Code read from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_DRD",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd hits from local IA)",
      R"(TOR Occupancy; Data read from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_LLCPREFRFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefRFO hits from local IA)",
      R"(TOR Occupancy; Last level cache prefetch read for ownership from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_RFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO hits from local IA)",
      R"(TOR Occupancy; Read for ownership from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LLCPREFRFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefRFO misses from local IA)",
      R"(TOR Occupancy; Last level cache prefetch read for ownership from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_MISS_RFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO misses from local IO)",
      R"(TOR Occupancy : RFOs issued by IO Devices that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_MISS_ITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; ITOM misses from local IO)",
      R"(TOR Occupancy : ItoMs issued by IO Devices that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IRQ_IA",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : IRQ - iA)",
      R"(TOR Occupancy : IRQ - iA : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : From an iA Core)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.EVICT",
      EventDef::Encoding{.code = 0x36, .umask = 0x02, .msr_values = {0x00}},
      R"(TOR Occupancy : SF/LLC Evictions)",
      R"(TOR Occupancy : SF/LLC Evictions : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : TOR allocation occurred as a result of SF/LLC evictions (came from the ISMQ))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.PRQ",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : PRQ - IOSF)",
      R"(TOR Occupancy : PRQ - IOSF : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : From a PCIe Device)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IPQ",
      EventDef::Encoding{.code = 0x36, .umask = 0x08, .msr_values = {0x00}},
      R"(TOR Occupancy : IPQ)",
      R"(TOR Occupancy : IPQ : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IRQ_NON_IA",
      EventDef::Encoding{.code = 0x36, .umask = 0x10, .msr_values = {0x00}},
      R"(TOR Occupancy : IRQ - Non iA)",
      R"(TOR Occupancy : IRQ - Non iA : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.PRQ_NON_IOSF",
      EventDef::Encoding{.code = 0x36, .umask = 0x20, .msr_values = {0x00}},
      R"(TOR Occupancy : PRQ - Non IOSF)",
      R"(TOR Occupancy : PRQ - Non IOSF : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.RRQ",
      EventDef::Encoding{.code = 0x36, .umask = 0x40, .msr_values = {0x00}},
      R"(TOR Occupancy : RRQ)",
      R"(TOR Occupancy : RRQ : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.WBQ",
      EventDef::Encoding{.code = 0x36, .umask = 0x80, .msr_values = {0x00}},
      R"(TOR Occupancy : WBQ)",
      R"(TOR Occupancy : WBQ : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.LOC_IO",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : All from Local IO)",
      R"(TOR Occupancy : All from Local IO : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : All locally generated IO traffic)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.LOC_IA",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : All from Local iA)",
      R"(TOR Occupancy : All from Local iA : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : All locally initiated requests from iA Cores)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.LOC_ALL",
      EventDef::Encoding{.code = 0x36, .umask = 0x05, .msr_values = {0x00}},
      R"(TOR Occupancy : All from Local iA and IO)",
      R"(TOR Occupancy : All from Local iA and IO : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : All locally initiated requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.REM_SNPS",
      EventDef::Encoding{.code = 0x36, .umask = 0x08, .msr_values = {0x00}},
      R"(TOR Occupancy : All Snoops from Remote)",
      R"(TOR Occupancy : All Snoops from Remote : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : All snoops to this LLC that came from remote sockets)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.REM_ALL",
      EventDef::Encoding{.code = 0x36, .umask = 0xC8, .msr_values = {0x00}},
      R"(TOR Occupancy : All from Remote)",
      R"(TOR Occupancy : All from Remote : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T : All remote requests (e.g. snoops, writebacks) that came from remote sockets)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.HIT",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just Hits)",
      R"(TOR Occupancy : Just Hits : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.MISS",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just Misses)",
      R"(TOR Occupancy : Just Misses : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.MMCFG",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : MMCFG Access)",
      R"(TOR Occupancy : MMCFG Access : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.MMIO",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : MMIO Access)",
      R"(TOR Occupancy : MMIO Access : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.LOCAL_TGT",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just Local Targets)",
      R"(TOR Occupancy : Just Local Targets : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.REMOTE_TGT",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just Remote Targets)",
      R"(TOR Occupancy : Just Remote Targets : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.MATCH_OPC",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Match the Opcode in b[29:19] of the extended umask field)",
      R"(TOR Occupancy : Match the Opcode in b[29:19] of the extended umask field : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.PREMORPH_OPC",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Match the PreMorphed Opcode in b[29:19] of the extended umask field)",
      R"(TOR Occupancy : Match the PreMorphed Opcode in b[29:19] of the extended umask field : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.NEARMEM",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just NearMem)",
      R"(TOR Occupancy : Just NearMem : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.NOT_NEARMEM",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just NotNearMem)",
      R"(TOR Occupancy : Just NotNearMem : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.NONCOH",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just NonCoherent)",
      R"(TOR Occupancy : Just NonCoherent : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.ISOC",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : Just ISOC)",
      R"(TOR Occupancy : Just ISOC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.   T)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_CRD_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; CRd Pref hits from local IA)",
      R"(TOR Occupancy; Code read prefetch from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_DRD_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Pref hits from local IA)",
      R"(TOR Occupancy; Data read prefetch from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_DRD_OPT",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Opt hits from local IA)",
      R"(TOR Occupancy; Data read opt from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_DRD_OPT_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Opt Pref hits from local IA)",
      R"(TOR Occupancy; Data read opt prefetch from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_RFO_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO Pref hits from local IA)",
      R"(TOR Occupancy; Read for ownership prefetch from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_CRD_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; CRd Pref misses from local IA)",
      R"(TOR Occupancy; Code read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Pref misses from local IA)",
      R"(TOR Occupancy; Data read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_OPT",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Opt misses from local IA)",
      R"(TOR Occupancy; Data read opt from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_OPT_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Opt Pref misses from local IA)",
      R"(TOR Occupancy; Data read opt prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_RFO_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO prefetch misses from local IA)",
      R"(TOR Occupancy; Read for ownership prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_HIT_ITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; ITOM hits from local IO)",
      R"(TOR Occupancy : ItoMs issued by IO Devices that Hit the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_HIT_RFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO hits from local IO)",
      R"(TOR Occupancy : RFOs issued by IO Devices that hit the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_RFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; ItoM from local IO)",
      R"(TOR Occupancy : RFOs issued by IO Devices : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_ITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; ITOM from local IO)",
      R"(TOR Occupancy : ItoMs issued by IO Devices : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_RFO_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO prefetch from local IA)",
      R"(TOR Occupancy; Read for ownership prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_LLCPREFRFO",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefRFO from local IA)",
      R"(TOR Occupancy; Last level cache prefetch read for ownership from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_DRD_OPT",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Opt from local IA)",
      R"(TOR Occupancy; Data read opt from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_DRD_OPT_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Opt Pref from local IA)",
      R"(TOR Occupancy; Data read opt prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_CRD_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; CRd Pref from local IA)",
      R"(TOR Occupancy; Code read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_DRD_PREF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Pref from local IA)",
      R"(TOR Occupancy; Data read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_LOCAL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Pref misses from local IA)",
      R"(TOR Occupancy; Data read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_REMOTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; DRd Pref misses from local IA)",
      R"(TOR Occupancy; Data read prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_RFO_LOCAL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO misses from local IA)",
      R"(TOR Occupancy; Read for ownership from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_RFO_REMOTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO misses from local IA)",
      R"(TOR Occupancy; Read for ownership from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_RFO_PREF_LOCAL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO prefetch misses from local IA)",
      R"(TOR Occupancy; Read for ownership prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_RFO_PREF_REMOTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; RFO prefetch misses from local IA)",
      R"(TOR Occupancy; Read for ownership prefetch from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.LOCAL_ALL",
      EventDef::Encoding{.code = 0x37, .umask = 0x0f, .msr_values = {0x00}},
      R"(Lines Victimized; Local - All Lines)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.REMOTE_ALL",
      EventDef::Encoding{.code = 0x37, .umask = 0x0f, .msr_values = {0x00}},
      R"(Lines Victimized; Remote - All Lines)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.TOTAL_E",
      EventDef::Encoding{.code = 0x37, .umask = 0x02, .msr_values = {0x00}},
      R"(All LLC lines in E state that are victimized on a fill)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.TOTAL_M",
      EventDef::Encoding{.code = 0x37, .umask = 0x01, .msr_values = {0x00}},
      R"(All LLC lines in M state that are victimized on a fill)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.TOTAL_S",
      EventDef::Encoding{.code = 0x37, .umask = 0x04, .msr_values = {0x00}},
      R"(All LLC lines in S state that are victimized on a fill)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.M_STATE",
      EventDef::Encoding{.code = 0x37, .umask = 0x01, .msr_values = {0x00}},
      R"(Lines Victimized : Lines in M state)",
      R"(Lines Victimized : Lines in M state : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.E_STATE",
      EventDef::Encoding{.code = 0x37, .umask = 0x02, .msr_values = {0x00}},
      R"(Lines Victimized : Lines in E state)",
      R"(Lines Victimized : Lines in E state : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.S_STATE",
      EventDef::Encoding{.code = 0x37, .umask = 0x04, .msr_values = {0x00}},
      R"(Lines Victimized : Lines in S State)",
      R"(Lines Victimized : Lines in S State : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.LOCAL_ONLY",
      EventDef::Encoding{.code = 0x37, .umask = 0x00, .msr_values = {0x00}},
      R"(Lines Victimized : Local Only)",
      R"(Lines Victimized : Local Only : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.REMOTE_ONLY",
      EventDef::Encoding{.code = 0x37, .umask = 0x00, .msr_values = {0x00}},
      R"(Lines Victimized : Remote Only)",
      R"(Lines Victimized : Remote Only : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.LOCAL_M",
      EventDef::Encoding{.code = 0x37, .umask = 0x01, .msr_values = {0x00}},
      R"(Lines Victimized)",
      R"(Lines Victimized : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.LOCAL_E",
      EventDef::Encoding{.code = 0x37, .umask = 0x02, .msr_values = {0x00}},
      R"(Lines Victimized)",
      R"(Lines Victimized : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.LOCAL_S",
      EventDef::Encoding{.code = 0x37, .umask = 0x04, .msr_values = {0x00}},
      R"(Lines Victimized)",
      R"(Lines Victimized : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.REMOTE_M",
      EventDef::Encoding{.code = 0x37, .umask = 0x01, .msr_values = {0x00}},
      R"(Lines Victimized)",
      R"(Lines Victimized : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.REMOTE_E",
      EventDef::Encoding{.code = 0x37, .umask = 0x02, .msr_values = {0x00}},
      R"(Lines Victimized)",
      R"(Lines Victimized : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.REMOTE_S",
      EventDef::Encoding{.code = 0x37, .umask = 0x04, .msr_values = {0x00}},
      R"(Lines Victimized)",
      R"(Lines Victimized : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_MISC.RFO_HIT_S",
      EventDef::Encoding{.code = 0x39, .umask = 0x08, .msr_values = {0x00}},
      R"(Number of times that an RFO hit in S state.)",
      R"(Counts when a RFO (the Read for Ownership issued before a  write) request hit a cacheline in the S (Shared) state.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_MISC.RSPI_WAS_FSE",
      EventDef::Encoding{.code = 0x39, .umask = 0x01, .msr_values = {0x00}},
      R"(Cbo Misc : Silent Snoop Eviction)",
      R"(Cbo Misc : Silent Snoop Eviction : Miscellaneous events in the Cbo. : Counts the number of times when a Snoop hit in FSE states and triggered a silent eviction.  This is useful because this information is lost in the PRE encodings.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_MISC.WC_ALIASING",
      EventDef::Encoding{.code = 0x39, .umask = 0x02, .msr_values = {0x00}},
      R"(Cbo Misc : Write Combining Aliasing)",
      R"(Cbo Misc : Write Combining Aliasing : Miscellaneous events in the Cbo. : Counts the number of times that a USWC write (WCIL(F)) transaction hit in the LLC in M state, triggering a WBMtoI followed by the USWC write.  This occurs when there is WC aliasing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_MISC.CV0_PREF_VIC",
      EventDef::Encoding{.code = 0x39, .umask = 0x10, .msr_values = {0x00}},
      R"(Cbo Misc : CV0 Prefetch Victim)",
      R"(Cbo Misc : CV0 Prefetch Victim : Miscellaneous events in the Cbo.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_MISC.CV0_PREF_MISS",
      EventDef::Encoding{.code = 0x39, .umask = 0x20, .msr_values = {0x00}},
      R"(Cbo Misc : CV0 Prefetch Miss)",
      R"(Cbo Misc : CV0 Prefetch Miss : Miscellaneous events in the Cbo.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_INSERTS.UPI_ALLCH",
      EventDef::Encoding{.code = 0x56, .umask = 0x0a, .msr_values = {0x00}},
      R"(Prefetch CAM Inserts : UPI - All Channels)",
      R"(Prefetch CAM Inserts : UPI - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_INSERTS.XPT_ALLCH",
      EventDef::Encoding{.code = 0x56, .umask = 0x05, .msr_values = {0x00}},
      R"(Prefetch CAM Inserts : XPT - All Channels)",
      R"(Prefetch CAM Inserts : XPT -All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_DROPS.XPT_ALLCH",
      EventDef::Encoding{.code = 0x58, .umask = 0x05, .msr_values = {0x00}},
      R"(Data Prefetches Dropped)",
      R"(Data Prefetches Dropped)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_MERGE.UPI_ALLCH",
      EventDef::Encoding{.code = 0x5d, .umask = 0x0a, .msr_values = {0x00}},
      R"(: UPI - All Channels)",
      R"(: UPI - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_MERGE.XPT_ALLCH",
      EventDef::Encoding{.code = 0x5d, .umask = 0x05, .msr_values = {0x00}},
      R"(: XPT - All Channels)",
      R"(: XPT - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_EGRESS_ORDERING.IV_SNOOPGO_UP",
      EventDef::Encoding{.code = 0xba, .umask = 0x01, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Up)",
      R"(Egress Blocking due to Ordering requirements : Up : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_EGRESS_ORDERING.IV_SNOOPGO_DN",
      EventDef::Encoding{.code = 0xba, .umask = 0x04, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Down)",
      R"(Egress Blocking due to Ordering requirements : Down : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRDPTE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd PTEs issued by iA Cores that Missed the LLC)",
      R"(TOR Inserts : DRd PTEs issued by iA Cores due to a page walk that missed the LLC : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_HIT_DRDPTE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd PTEs issued by iA Cores that Hit the LLC)",
      R"(TOR Inserts : DRd PTEs issued by iA Cores due to page walks that hit the LLC : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_DRDPTE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd PTEs issued by iA Cores)",
      R"(TOR Inserts : DRd PTEs issued by iA Cores due to a page walk : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WBEFTOE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WBEFtoEs issued by an IA Core.  Non Modified Write Backs)",
      R"(WbEFtoEs issued by iA Cores .  (Non Modified Write Backs)  :Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.  Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_HIT_PCIRDCUR",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy; RdCur and FsRdCur hits from local IO)",
      R"(TOR Occupancy : PCIRdCurs issued by IO Devices that hit the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_HIT_LLCPREFCODE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; LLCPrefCode hits from local IA)",
      R"(TOR Inserts; Last level cache prefetch code read from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_HIT_LLCPREFDATA",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; LLCPrefData hits from local IA)",
      R"(TOR Inserts; Last level cache prefetch data read from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_LLCPREFCODE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; LLCPrefCode misses from local IA)",
      R"(TOR Inserts; Last level cache prefetch code read from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_LLCPREFCODE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefCode hits from local IA)",
      R"(TOR Occupancy; Last level cache prefetch code read from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_LLCPREFDATA",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefData hits from local IA)",
      R"(TOR Occupancy; Last level cache prefetch data read from local IA that hits in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_LLCPREFDATA",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefData from local IA)",
      R"(TOR Occupancy; Last level cache prefetch data read from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LLCPREFCODE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefCode misses from local IA)",
      R"(TOR Occupancy; Last level cache prefetch code read from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LLCPREFDATA",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefData misses from local IA)",
      R"(TOR Occupancy; Last level cache prefetch data read from local IA that misses in the snoop filter)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_LLCPREFCODE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts; LLCPrefCode from local IA)",
      R"(TOR Inserts; Last level cache prefetch code read from local IA.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_LLCPREFCODE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy; LLCPrefCode from local IA)",
      R"(TOR Occupancy; Last level cache prefetch data read from local IA.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_PREF_INSERTS.DDR",
      EventDef::Encoding{.code = 0xda, .umask = 0x02, .msr_values = {0x00}},
      R"(Scoreboard Prefetch Inserts : DDR4)",
      R"(Scoreboard Prefetch Inserts : DDR4)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_PREF_INSERTS.PMM",
      EventDef::Encoding{.code = 0xda, .umask = 0x04, .msr_values = {0x00}},
      R"(Scoreboard Prefetch Inserts : PMM)",
      R"(Scoreboard Prefetch Inserts : PMM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.PMM0_CMP",
      EventDef::Encoding{.code = 0xdd, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.PMM0_CMP)",
      R"(UNC_M_SB_TAGGED.PMM0_CMP)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.PMM1_CMP",
      EventDef::Encoding{.code = 0xdd, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.PMM1_CMP)",
      R"(UNC_M_SB_TAGGED.PMM1_CMP)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_TAGGED.PMM2_CMP",
      EventDef::Encoding{.code = 0xdd, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M_SB_TAGGED.PMM2_CMP)",
      R"(UNC_M_SB_TAGGED.PMM2_CMP)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_OCCUPANCY.PMM_RDS",
      EventDef::Encoding{.code = 0xd5, .umask = 0x04, .msr_values = {0x00}},
      R"(Scoreboard Occupancy : Persistent Mem reads)",
      R"(Scoreboard Occupancy : Persistent Mem reads)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_OCCUPANCY.PMM_WRS",
      EventDef::Encoding{.code = 0xd5, .umask = 0x08, .msr_values = {0x00}},
      R"(Scoreboard Occupancy : Persistent Mem writes)",
      R"(Scoreboard Occupancy : Persistent Mem writes)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_INSERTS.PMM_RDS",
      EventDef::Encoding{.code = 0xd6, .umask = 0x04, .msr_values = {0x00}},
      R"(Scoreboard Inserts : Persistent Mem reads)",
      R"(Scoreboard Inserts : Persistent Mem reads)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_INSERTS.PMM_WRS",
      EventDef::Encoding{.code = 0xd6, .umask = 0x08, .msr_values = {0x00}},
      R"(Scoreboard Inserts : Persistent Mem writes)",
      R"(Scoreboard Inserts : Persistent Mem writes)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_NE",
      EventDef::Encoding{.code = 0x18, .umask = 0x03, .msr_values = {0x00}},
      R"(Counts the number of cycles where there's at least one element in the read buffer.  This includes reads to both DDR and PMEM.)",
      R"(Counts the number of cycles where there's at least one element in the read buffer.  This includes reads to both DDR and PMEM.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_RPQ_OCCUPANCY.NO_GNT_SCH0",
      EventDef::Encoding{.code = 0xe0, .umask = 0x04, .msr_values = {0x00}},
      R"(PMM Read Pending Queue Occupancy)",
      R"(Accumulates the per cycle occupancy of the PMM Read Pending Queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_RPQ_OCCUPANCY.NO_GNT_SCH1",
      EventDef::Encoding{.code = 0xe0, .umask = 0x08, .msr_values = {0x00}},
      R"(PMM Read Pending Queue Occupancy)",
      R"(Accumulates the per cycle occupancy of the PMM Read Pending Queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_WPQ_OCCUPANCY.CAS",
      EventDef::Encoding{.code = 0xe4, .umask = 0x0c, .msr_values = {0x00}},
      R"(PMM (for IXP) Write Pending Queue Occupancy)",
      R"(PMM (for IXP) Write Pending Queue Occupancy : Accumulates the per cycle occupancy of the Write Pending Queue to the IXP DIMM.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_WPQ_OCCUPANCY.PWR",
      EventDef::Encoding{.code = 0xe4, .umask = 0x30, .msr_values = {0x00}},
      R"(PMM (for IXP) Write Pending Queue Occupancy)",
      R"(PMM (for IXP) Write Pending Queue Occupancy : Accumulates the per cycle occupancy of the Write Pending Queue to the IXP DIMM.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_WPQ_CYCLES_NE",
      EventDef::Encoding{.code = 0xe5, .umask = 0x00, .msr_values = {0x00}},
      R"(PMM (for IXP) Write Queue Cycles Not Empty)",
      R"(PMM (for IXP) Write Queue Cycles Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.RD_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x01, .msr_values = {0x00}},
      R"(DRAM Precharge commands. : Precharge due to read)",
      R"(DRAM Precharge commands. : Precharge due to read : Counts the number of DRAM Precharge commands sent on this channel. : Precharge from read bank scheduler)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.WR_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x02, .msr_values = {0x00}},
      R"(DRAM Precharge commands. : Precharge due to write)",
      R"(DRAM Precharge commands. : Precharge due to write : Counts the number of DRAM Precharge commands sent on this channel. : Precharge from write bank scheduler)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.UFILL_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x04, .msr_values = {0x00}},
      R"(DRAM Precharge commands.)",
      R"(DRAM Precharge commands. : Counts the number of DRAM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.PGT_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x08, .msr_values = {0x00}},
      R"(DRAM Precharge commands. : Precharges from Page Table)",
      R"(DRAM Precharge commands. : Precharges from Page Table : Counts the number of DRAM Precharge commands sent on this channel. : Equivalent to PAGE_EMPTY)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.RD_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x10, .msr_values = {0x00}},
      R"(DRAM Precharge commands.)",
      R"(DRAM Precharge commands. : Counts the number of DRAM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.WR_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x20, .msr_values = {0x00}},
      R"(DRAM Precharge commands.)",
      R"(DRAM Precharge commands. : Counts the number of DRAM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.UFILL_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x40, .msr_values = {0x00}},
      R"(DRAM Precharge commands.)",
      R"(DRAM Precharge commands. : Counts the number of DRAM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.PGT_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x80, .msr_values = {0x00}},
      R"(DRAM Precharge commands.)",
      R"(DRAM Precharge commands. : Counts the number of DRAM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PRE_COUNT.UFILL",
      EventDef::Encoding{.code = 0x03, .umask = 0x44, .msr_values = {0x00}},
      R"(DRAM Precharge commands.)",
      R"(DRAM Precharge commands. : Counts the number of DRAM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.WR_NONPRE",
      EventDef::Encoding{.code = 0x05, .umask = 0xD0, .msr_values = {0x00}},
      R"(DRAM RD_CAS and WR_CAS Commands. : DRAM WR_CAS commands w/o auto-pre)",
      R"(DRAM RD_CAS and WR_CAS Commands. : DRAM WR_CAS commands w/o auto-pre : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.PCH0",
      EventDef::Encoding{.code = 0x05, .umask = 0x40, .msr_values = {0x00}},
      R"(DRAM RD_CAS and WR_CAS Commands. : Pseudo Channel 0)",
      R"(DRAM RD_CAS and WR_CAS Commands. : Pseudo Channel 0 : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_COUNT.PCH1",
      EventDef::Encoding{.code = 0x05, .umask = 0x80, .msr_values = {0x00}},
      R"(DRAM RD_CAS and WR_CAS Commands. : Pseudo Channel 1)",
      R"(DRAM RD_CAS and WR_CAS Commands. : Pseudo Channel 1 : DRAM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.RD_64B",
      EventDef::Encoding{.code = 0x06, .umask = 0xC1, .msr_values = {0x00}},
      R"(Read CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      R"(Read CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.RD_UFILL_64B",
      EventDef::Encoding{.code = 0x06, .umask = 0xC2, .msr_values = {0x00}},
      R"(Underfill Read CAS Command in Regular Mode (64B) in Pseudochannel 1)",
      R"(Underfill Read CAS Command in Regular Mode (64B) in Pseudochannel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.WR_64B",
      EventDef::Encoding{.code = 0x06, .umask = 0xC4, .msr_values = {0x00}},
      R"(Write CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      R"(Write CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.RD_32B",
      EventDef::Encoding{.code = 0x06, .umask = 0xC8, .msr_values = {0x00}},
      R"(Read CAS Command in Interleaved Mode (32B))",
      R"(Read CAS Command in Interleaved Mode (32B))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.RD_UFILL_32B",
      EventDef::Encoding{.code = 0x06, .umask = 0xD0, .msr_values = {0x00}},
      R"(Underfill Read CAS Command in Interleaved Mode (32B))",
      R"(Underfill Read CAS Command in Interleaved Mode (32B))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.WR_32B",
      EventDef::Encoding{.code = 0x06, .umask = 0xE0, .msr_values = {0x00}},
      R"(Write CAS Command in Interleaved Mode (32B))",
      R"(Write CAS Command in Interleaved Mode (32B))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.PCH0",
      EventDef::Encoding{.code = 0x06, .umask = 0x40, .msr_values = {0x00}},
      R"(Pseudo Channel 0)",
      R"(Pseudo Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_CAS_ISSUED_REQ_LEN.PCH1",
      EventDef::Encoding{.code = 0x06, .umask = 0x80, .msr_values = {0x00}},
      R"(Pseudo Channel 1)",
      R"(Pseudo Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_NE.PCH0",
      EventDef::Encoding{.code = 0x18, .umask = 0x01, .msr_values = {0x00}},
      R"(Read Data Buffer Not Empty)",
      R"(Read Data Buffer Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_RDB_NE.PCH1",
      EventDef::Encoding{.code = 0x18, .umask = 0x02, .msr_values = {0x00}},
      R"(Read Data Buffer Not Empty)",
      R"(Read Data Buffer Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_RPQ_OCCUPANCY.GNT_WAIT_SCH0",
      EventDef::Encoding{.code = 0xE0, .umask = 0x10, .msr_values = {0x00}},
      R"(PMM Read Pending Queue Occupancy)",
      R"(PMM Read Pending Queue Occupancy : Accumulates the per cycle occupancy of the PMM Read Pending Queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_PMM_RPQ_OCCUPANCY.GNT_WAIT_SCH1",
      EventDef::Encoding{.code = 0xE0, .umask = 0x20, .msr_values = {0x00}},
      R"(PMM Read Pending Queue Occupancy)",
      R"(PMM Read Pending Queue Occupancy : Accumulates the per cycle occupancy of the PMM Read Pending Queue.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.SLOW_INSERT",
      EventDef::Encoding{.code = 0x66, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.SLOW_INSERT)",
      R"(UNC_CHA_PMM_QOS.SLOW_INSERT)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.DDR4_FAST_INSERT",
      EventDef::Encoding{.code = 0x66, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.DDR4_FAST_INSERT)",
      R"(UNC_CHA_PMM_QOS.DDR4_FAST_INSERT)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.THROTTLE",
      EventDef::Encoding{.code = 0x66, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.THROTTLE)",
      R"(UNC_CHA_PMM_QOS.THROTTLE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.REJ_IRQ",
      EventDef::Encoding{.code = 0x66, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.REJ_IRQ)",
      R"(UNC_CHA_PMM_QOS.REJ_IRQ)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.THROTTLE_PRQ",
      EventDef::Encoding{.code = 0x66, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.THROTTLE_PRQ)",
      R"(UNC_CHA_PMM_QOS.THROTTLE_PRQ)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.THROTTLE_IRQ",
      EventDef::Encoding{.code = 0x66, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.THROTTLE_IRQ)",
      R"(UNC_CHA_PMM_QOS.THROTTLE_IRQ)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS.SLOWTORQ_SKIP",
      EventDef::Encoding{.code = 0x66, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS.SLOWTORQ_SKIP)",
      R"(UNC_CHA_PMM_QOS.SLOWTORQ_SKIP)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS_OCCUPANCY.DDR_SLOW_FIFO",
      EventDef::Encoding{.code = 0x67, .umask = 0x01, .msr_values = {0x00}},
      R"(Number of SLOW TOR Request inserted to ha_pmm_tor_req_fifo)",
      R"(Number of SLOW TOR Request inserted to ha_pmm_tor_req_fifo)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_QOS_OCCUPANCY.DDR_FAST_FIFO",
      EventDef::Encoding{.code = 0x67, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_QOS_OCCUPANCY.DDR_FAST_FIFO)",
      R"(: count # of FAST TOR Request inserted to ha_tor_req_fifo)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LOCAL_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Transactions homed locally)",
      R"(Cache Lookups : Transactions homed locally : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Transaction whose address resides in the local MC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Transactions homed remotely)",
      R"(Cache Lookups : Transactions homed remotely : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Transaction whose address resides in a remote MC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.REMOTE_SNOOP_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Remote snoop requests)",
      R"(Cache Lookups : Remote snoop requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Remote snoop transactions to the LLC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.DATA_READ_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Data Read Request)",
      R"(Cache Lookups : Data Read Request : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Read transactions.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.ANY_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : All Requests)",
      R"(Cache Lookups : All Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Any local or remote transaction to the LLC, including prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.OTHER_REQ_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Write Requests)",
      R"(Cache Lookups : Write Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Writeback transactions from L2 to the LLC  This includes all write transactions -- both Cacheable and UC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.FLUSH_OR_INV_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Flush)",
      R"(Cache Lookups : Flush : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.CODE_READ_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : CRd Requests)",
      R"(Cache Lookups : CRd Requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Local or remote CRd transactions to the LLC.  This includes CRd prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.LLCPREF_LOCAL_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Local LLC prefetch requests (from LLC))",
      R"(Cache Lookups : Local LLC prefetch requests (from LLC) : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Any local LLC prefetch to the LLC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.PREF_OR_DMND_REMOTE_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Remote non-snoop requests)",
      R"(Cache Lookups : Remote non-snoop requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Remote non-snoop transactions to the LLC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.RFO_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : RFO Request Filter)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing. : Local or remote RFO transactions to the LLC.  This includes RFO prefetch.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.MISS_ALL",
      EventDef::Encoding{.code = 0x34, .umask = 0x01, .msr_values = {0x00}},
      R"(Cache Lookups : All Misses)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.DATA_READ_ALL",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Data Reads)",
      R"(Cache Lookups : Data Reads : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.DATA_READ_MISS",
      EventDef::Encoding{.code = 0x34, .umask = 0x01, .msr_values = {0x00}},
      R"(Cache Lookups : Data Read Misses)",
      R"(Cache Lookups : Data Read Misses : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.DATA_READ_LOCAL",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Demand Data Reads, Core and LLC prefetches)",
      R"(Cache Lookups : Demand Data Reads, Core and LLC prefetches : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.WRITE_LOCAL",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Writes)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing. : Requests that install or change a line in the LLC.    Examples:  Writebacks from Core L2's and UPI.  Prefetches into the LLC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.RFO_LOCAL",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Locally HOMed RFOs - Demand and Prefetches)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.WRITE_REMOTE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : Remote Writes)",
      R"(Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.ALL_REMOTE",
      EventDef::Encoding{.code = 0x34, .umask = 0xff, .msr_values = {0x00}},
      R"(Cache Lookups : All transactions from Remote Agents)",
      R"(Cache Lookups : All transactions from Remote Agents : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS select a state or states (in the umask field) to match.  Otherwise, the event will count nothing.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.IO",
      EventDef::Encoding{.code = 0x37, .umask = 0x10, .msr_values = {0x00}},
      R"(Lines Victimized : IO traffic)",
      R"(Lines Victimized : IO traffic : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.IA",
      EventDef::Encoding{.code = 0x37, .umask = 0x20, .msr_values = {0x00}},
      R"(Lines Victimized : IA traffic)",
      R"(Lines Victimized : IA traffic : Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_PREF_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_PREF_LOCAL_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_PREF_REMOTE_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_PREF_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_PREF_LOCAL_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRD_PREF_REMOTE_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_CRD_LOCAL",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : CRd issued by iA Cores that Missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_CRD_REMOTE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : CRd issued by iA Cores that Missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_CRD_PREF_LOCAL",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : CRd_Prefs issued by iA Cores that Missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_CRD_PREF_REMOTE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : CRd_Prefs issued by iA Cores that Missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_ITOMCACHENEAR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : ItoMCacheNears issued by iA Cores)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WBMTOI",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WbMtoIs issued by an iA Cores. Modified Write Backs)",
      R"(WbMtoIs issued by iA Cores .  (Modified Write Backs)  :Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.  Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_HIT_ITOM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : ItoMs issued by iA Cores that Hit LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_ITOM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : ItoMs issued by iA Cores that Missed LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_UCRDF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : UCRdFs issued by iA Cores that Missed LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WIL",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WiLs issued by iA Cores that Missed LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WCILF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLF issued by iA Cores)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WCILF",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLF issued by iA Cores that Missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WCILF_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLFs issued by iA Cores targeting PMM that missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_LOCAL_WCILF_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLFs issued by iA Cores targeting PMM that missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_REMOTE_WCILF_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLFs issued by iA Cores targeting PMM that missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WCILF_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLFs issued by iA Cores targeting DDR that missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_LOCAL_WCILF_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLFs issued by iA Cores targeting DDR that missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_REMOTE_WCILF_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLFs issued by iA Cores targeting DDR that missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WCIL",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WCIL",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores that Missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WCIL_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores targeting PMM that missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_LOCAL_WCIL_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores targeting PMM that missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_REMOTE_WCIL_PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores targeting PMM that missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_WCIL_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores targeting DDR that missed the LLC)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_LOCAL_WCIL_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores targeting DDR that missed the LLC - HOMed locally)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_REMOTE_WCIL_DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WCiLs issued by iA Cores targeting DDR that missed the LLC - HOMed remotely)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IO_WBMTOI",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts : WbMtoIs issued by IO Devices)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IO_CLFLUSH",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Inserts : CLFlushes issued by IO Devices)",
      R"(Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.   Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_LOCAL_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRds issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed locally)",
      R"(TOR Occupancy : DRds issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_REMOTE_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRds issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : DRds issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_LOCAL_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRds issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed locally)",
      R"(TOR Occupancy : DRds issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_REMOTE_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRds issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : DRds issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC)",
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_LOCAL_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed locally)",
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_REMOTE_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting PMM Mem that Missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC)",
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_LOCAL_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed locally)",
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRD_PREF_REMOTE_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : DRd_Prefs issued by iA Cores targeting DDR Mem that Missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_CRD_LOCAL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : CRd issued by iA Cores that Missed the LLC - HOMed locally)",
      R"(TOR Occupancy : CRd issued by iA Cores that Missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_CRD_REMOTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : CRd issued by iA Cores that Missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : CRd issued by iA Cores that Missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_CRD_PREF_LOCAL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : CRd_Prefs issued by iA Cores that Missed the LLC - HOMed locally)",
      R"(TOR Occupancy : CRd_Prefs issued by iA Cores that Missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_CRD_PREF_REMOTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : CRd_Prefs issued by iA Cores that Missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : CRd_Prefs issued by iA Cores that Missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_CLFLUSH",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : CLFlushes issued by iA Cores)",
      R"(TOR Occupancy : CLFlushes issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_CLFLUSHOPT",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : CLFlushOpts issued by iA Cores)",
      R"(TOR Occupancy : CLFlushOpts issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_ITOMCACHENEAR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMCacheNears issued by iA Cores)",
      R"(TOR Occupancy : ItoMCacheNears issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_SPECITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : SpecItoMs issued by iA Cores)",
      R"(TOR Occupancy : SpecItoMs issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_WBMTOI",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WbMtoIs issued by iA Cores)",
      R"(TOR Occupancy : WbMtoIs issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_ITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMs issued by iA Cores)",
      R"(TOR Occupancy : ItoMs issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_ITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMs issued by iA Cores that Hit LLC)",
      R"(TOR Occupancy : ItoMs issued by iA Cores that Hit LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_ITOM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMs issued by iA Cores that Missed LLC)",
      R"(TOR Occupancy : ItoMs issued by iA Cores that Missed LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_UCRDF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : UCRdFs issued by iA Cores that Missed LLC)",
      R"(TOR Occupancy : UCRdFs issued by iA Cores that Missed LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WIL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WiLs issued by iA Cores that Missed LLC)",
      R"(TOR Occupancy : WiLs issued by iA Cores that Missed LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_WCILF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLF issued by iA Cores)",
      R"(TOR Occupancy : WCiLF issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WCILF",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLF issued by iA Cores that Missed the LLC)",
      R"(TOR Occupancy : WCiLF issued by iA Cores that Missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WCILF_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting PMM that missed the LLC)",
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting PMM that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LOCAL_WCILF_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting PMM that missed the LLC - HOMed locally)",
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting PMM that missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_REMOTE_WCILF_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting PMM that missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting PMM that missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WCILF_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting DDR that missed the LLC)",
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting DDR that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LOCAL_WCILF_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting DDR that missed the LLC - HOMed locally)",
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting DDR that missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_REMOTE_WCILF_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting DDR that missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : WCiLFs issued by iA Cores targeting DDR that missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_WCIL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores)",
      R"(TOR Occupancy : WCiLs issued by iA Cores : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WCIL",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores that Missed the LLC)",
      R"(TOR Occupancy : WCiLs issued by iA Cores that Missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WCIL_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting PMM that missed the LLC)",
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting PMM that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LOCAL_WCIL_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting PMM that missed the LLC - HOMed locally)",
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting PMM that missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_REMOTE_WCIL_PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting PMM that missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting PMM that missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_WCIL_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting DDR that missed the LLC)",
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting DDR that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LOCAL_WCIL_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting DDR that missed the LLC - HOMed locally)",
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting DDR that missed the LLC - HOMed locally : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_REMOTE_WCIL_DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting DDR that missed the LLC - HOMed remotely)",
      R"(TOR Occupancy : WCiLs issued by iA Cores targeting DDR that missed the LLC - HOMed remotely : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_WBMTOI",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : WbMtoIs issued by IO Devices)",
      R"(TOR Occupancy : WbMtoIs issued by IO Devices : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_CLFLUSH",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : CLFlushes issued by IO Devices)",
      R"(TOR Occupancy : CLFlushes issued by IO Devices : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_HIT_ITOMCACHENEAR",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMCacheNears, indicating a partial write request, from IO Devices that hit the LLC)",
      R"(TOR Occupancy : ItoMCacheNears, indicating a partial write request, from IO Devices that hit the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_MISS_ITOMCACHENEAR",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMCacheNears, indicating a partial write request, from IO Devices that missed the LLC)",
      R"(TOR Occupancy : ItoMCacheNears, indicating a partial write request, from IO Devices that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.PMM",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : PMM Access)",
      R"(TOR Occupancy : PMM Access : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.PMM",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : PMM Access)",
      R"(TOR Inserts : PM Access : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.DDR",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Occupancy : DDR Access)",
      R"(TOR Occupancy : DDR Access : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.DDR",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(TOR Inserts : DDR Access)",
      R"(TOR Inserts : DDR Access : Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.MEMWRNI",
      EventDef::Encoding{.code = 0x70, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.MEMWRNI)",
      R"(UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.MEMWRNI)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.MEMWR",
      EventDef::Encoding{.code = 0x70, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.MEMWR)",
      R"(UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.MEMWR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.IODC",
      EventDef::Encoding{.code = 0x70, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.IODC)",
      R"(UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS2.IODC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_INVITOX.SETCONFLICT",
      EventDef::Encoding{.code = 0x65, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_MEMMODE_NM_INVITOX.SETCONFLICT)",
      R"(UNC_CHA_PMM_MEMMODE_NM_INVITOX.SETCONFLICT)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_INVITOX.REMOTE",
      EventDef::Encoding{.code = 0x65, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_MEMMODE_NM_INVITOX.REMOTE)",
      R"(UNC_CHA_PMM_MEMMODE_NM_INVITOX.REMOTE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_INVITOX.LOCAL",
      EventDef::Encoding{.code = 0x65, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_CHA_PMM_MEMMODE_NM_INVITOX.LOCAL)",
      R"(UNC_CHA_PMM_MEMMODE_NM_INVITOX.LOCAL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS.LLC",
      EventDef::Encoding{.code = 0x64, .umask = 0x02, .msr_values = {0x00}},
      R"(Memory Mode related events; Counts the number of times CHA saw a Near Memory set conflict in SF/LLC)",
      R"(Near Memory evictions due to another read to the same Near Memory set in the LLC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS.TOR",
      EventDef::Encoding{.code = 0x64, .umask = 0x04, .msr_values = {0x00}},
      R"(Memory Mode related events; Counts the number of times CHA saw a Near Memory set conflict in TOR)",
      R"(No Reject in the CHA due to a pending read to the same Near Memory set in the TOR.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_PMM_MEMMODE_NM_SETCONFLICTS.SF",
      EventDef::Encoding{.code = 0x64, .umask = 0x01, .msr_values = {0x00}},
      R"(Memory Mode related events; Counts the number of times CHA saw a Near memory set conflict in SF/LLC)",
      R"(Near Memory evictions due to another read to the same Near Memory set in the SF)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2CORE_NOT_TAKEN_DIRSTATE.NON_CISGRESS",
      EventDef::Encoding{.code = 0x17, .umask = 0x02, .msr_values = {0x00}},
      R"(Cycles when direct to core mode, which bypasses the CHA, was disabled : Non Cisgress)",
      R"(Cycles when direct to core mode, which bypasses the CHA, was disabled : Non Cisgress : Counts the number of time non cisgress D2C was not honoured by egress due to directory state constraints)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2CORE_TXN_OVERRIDE.PMM_HIT",
      EventDef::Encoding{.code = 0x18, .umask = 0x01, .msr_values = {0x00}},
      R"(Number of reads in which direct to core transaction was overridden : 2LM Hit?)",
      R"(Number of reads in which direct to core transaction was overridden : 2LM Hit?)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2CORE_TXN_OVERRIDE.CISGRESS",
      EventDef::Encoding{.code = 0x18, .umask = 0x02, .msr_values = {0x00}},
      R"(Number of reads in which direct to core transaction was overridden : Cisgress)",
      R"(Number of reads in which direct to core transaction was overridden : Cisgress)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPITXN_OVERRIDE.PMM_HIT",
      EventDef::Encoding{.code = 0x1C, .umask = 0x01, .msr_values = {0x00}},
      R"(Number of times a direct to UPI transaction was overridden.)",
      R"(Number of times a direct to UPI transaction was overridden. : Counts the number of times D2K wasn't honored even though the incoming request had d2k set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_TXN_OVERRIDE.CISGRESS",
      EventDef::Encoding{.code = 0x1C, .umask = 0x02, .msr_values = {0x00}},
      R"(Number of times a direct to UPI transaction was overridden.)",
      R"(Number of times a direct to UPI transaction was overridden.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TAG_HIT.NM_UFILL_HIT_CLEAN",
      EventDef::Encoding{.code = 0x1F, .umask = 0x04, .msr_values = {0x00}},
      R"(Tag Hit : Clean NearMem Underfill Hit)",
      R"(Tag Hit indicates when a request sent to the iMC hit in Near Memory. : Counts clean underfill hits due to a partial write)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_TAG_HIT.NM_UFILL_HIT_DIRTY",
      EventDef::Encoding{.code = 0x1F, .umask = 0x08, .msr_values = {0x00}},
      R"(Tag Hit : Dirty NearMem Underfill Hit)",
      R"(Tag Hit indicates when a request sent to the iMC hit in Near Memory. : Counts dirty underfill read hits due to a partial write)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x01, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts any 1lm or 2lm hit data return that would result in directory update to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.I_TO_S_HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x02, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 1lm or 2lm hit  data returns that would result in directory update from I to S to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.I_TO_A_HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x04, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 1lm or 2lm hit  data returns that would result in directory update from I to A to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.S_TO_I_HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x08, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 1lm or 2lm hit  data returns that would result in directory update from S to I to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.S_TO_A_HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x10, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 1lm or 2lm hit  data returns that would result in directory update from S to A to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.A_TO_I_HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x20, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 1lm or 2lm hit  data returns that would result in directory update from A to I to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.A_TO_S_HIT_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x40, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 1lm or 2lm hit  data returns that would result in directory update from A to S to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x01, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts any 2lm miss data return that would result in directory update to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.I_TO_S_MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x02, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts  2lm miss  data returns that would result in directory update from I to S to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.I_TO_A_MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x04, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 2lm miss  data returns that would result in directory update from I to A to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.S_TO_I_MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x08, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 2lm miss  data returns that would result in directory update from S to I to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.S_TO_A_MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x10, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 2lm miss  data returns that would result in directory update from S to A to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.A_TO_I_MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x20, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 2lm miss  data returns that would result in directory update from A to I to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECTORY_UPDATE.A_TO_S_MISS_NON_PMM",
      EventDef::Encoding{.code = 0x21, .umask = 0x40, .msr_values = {0x00}},
      R"(Multi-socket cacheline Directory Updates)",
      R"(Counts 2lm miss  data returns that would result in directory update from A to S to non persistent memory (DRAM or HBM))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_ISOCH",
      EventDef::Encoding{.code = 0x24, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_ISOCH)",
      R"(UNC_M2M_IMC_READS.CH0_ISOCH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_FROM_TGR",
      EventDef::Encoding{.code = 0x24, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_FROM_TGR)",
      R"(UNC_M2M_IMC_READS.CH0_FROM_TGR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_ISOCH",
      EventDef::Encoding{.code = 0x24, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_ISOCH)",
      R"(UNC_M2M_IMC_READS.CH1_ISOCH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_FROM_TGR",
      EventDef::Encoding{.code = 0x24, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_FROM_TGR)",
      R"(UNC_M2M_IMC_READS.CH1_FROM_TGR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.ISOCH",
      EventDef::Encoding{.code = 0x24, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.ISOCH)",
      R"(UNC_M2M_IMC_READS.ISOCH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.FROM_TGR",
      EventDef::Encoding{.code = 0x24, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.FROM_TGR)",
      R"(UNC_M2M_IMC_READS.FROM_TGR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_FULL_ISOCH",
      EventDef::Encoding{.code = 0x25, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_WRITES.CH0_FULL_ISOCH)",
      R"(UNC_M2M_IMC_WRITES.CH0_FULL_ISOCH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_PARTIAL_ISOCH",
      EventDef::Encoding{.code = 0x25, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_WRITES.CH0_PARTIAL_ISOCH)",
      R"(UNC_M2M_IMC_WRITES.CH0_PARTIAL_ISOCH)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_TO_DDR_AS_MEM",
      EventDef::Encoding{.code = 0x25, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_WRITES.CH0_TO_DDR_AS_MEM)",
      R"(UNC_M2M_IMC_WRITES.CH0_TO_DDR_AS_MEM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_TO_DDR_AS_CACHE",
      EventDef::Encoding{.code = 0x25, .umask = 0x40, .msr_values = {0x00}},
      R"(DDR, acting as Cache - Ch0)",
      R"(DDR, acting as Cache - Ch0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_FROM_TGR",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(From TGR - Ch0)",
      R"(From TGR - Ch0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_NI_MISS",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive Miss - Ch0)",
      R"(Non-Inclusive Miss - Ch0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_FULL_ISOCH",
      EventDef::Encoding{.code = 0x25, .umask = 0x04, .msr_values = {0x00}},
      R"(ISOCH Full Line - Ch1)",
      R"(ISOCH Full Line - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_PARTIAL_ISOCH",
      EventDef::Encoding{.code = 0x25, .umask = 0x08, .msr_values = {0x00}},
      R"(ISOCH Partial - Ch1)",
      R"(ISOCH Partial - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_TO_DDR_AS_MEM",
      EventDef::Encoding{.code = 0x25, .umask = 0x20, .msr_values = {0x00}},
      R"(DDR - Ch1)",
      R"(DDR - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_TO_DDR_AS_CACHE",
      EventDef::Encoding{.code = 0x25, .umask = 0x40, .msr_values = {0x00}},
      R"(DDR, acting as Cache - Ch1)",
      R"(DDR, acting as Cache - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_FROM_TGR",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(From TGR - Ch1)",
      R"(From TGR - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_NI_MISS",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive Miss - Ch1)",
      R"(Non-Inclusive Miss - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.FULL_ISOCH",
      EventDef::Encoding{.code = 0x25, .umask = 0x04, .msr_values = {0x00}},
      R"(ISOCH Full Line - All Channels)",
      R"(ISOCH Full Line - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.PARTIAL_ISOCH",
      EventDef::Encoding{.code = 0x25, .umask = 0x08, .msr_values = {0x00}},
      R"(ISOCH Partial - All Channels)",
      R"(ISOCH Partial - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.FROM_TGR",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(From TGR - All Channels)",
      R"(From TGR - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.NI_MISS",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive Miss - All Channels)",
      R"(Non-Inclusive Miss - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_OCCUPANCY.ALLCH",
      EventDef::Encoding{.code = 0x54, .umask = 0x03, .msr_values = {0x00}},
      R"(Prefetch CAM Occupancy : All Channels)",
      R"(Prefetch CAM Occupancy : All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_DROPS.UPI_ALLCH",
      EventDef::Encoding{.code = 0x58, .umask = 0x0a, .msr_values = {0x00}},
      R"(Data Prefetches Dropped : UPI - All Channels)",
      R"(Data Prefetches Dropped : UPI - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_NO_MERGE.WR_SQUASHED",
      EventDef::Encoding{.code = 0x5E, .umask = 0x10, .msr_values = {0x00}},
      R"(Demands Not Merged with CAMed Prefetches)",
      R"(Demands Not Merged with CAMed Prefetches)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_NO_MERGE.WR_MERGED",
      EventDef::Encoding{.code = 0x5E, .umask = 0x20, .msr_values = {0x00}},
      R"(Demands Not Merged with CAMed Prefetches)",
      R"(Demands Not Merged with CAMed Prefetches)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_DEMAND_NO_MERGE.RD_MERGED",
      EventDef::Encoding{.code = 0x5E, .umask = 0x40, .msr_values = {0x00}},
      R"(Demands Not Merged with CAMed Prefetches)",
      R"(Demands Not Merged with CAMed Prefetches)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RESP_MISS.ALLCH",
      EventDef::Encoding{.code = 0x5F, .umask = 0x03, .msr_values = {0x00}},
      R"(All Channels)",
      R"(All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RxC_DEALLOCS.PMM_MEMMODE_ACCEPT",
      EventDef::Encoding{.code = 0x62, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.PMM_MEMMODE_ACCEPT)",
      R"(UNC_M2M_PREFCAM_RxC_DEALLOCS.PMM_MEMMODE_ACCEPT)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART0_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART1_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART2_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART3_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART4_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART5_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART6_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_IN.PART7_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART0_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART4_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART3_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART2_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART1_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART6_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART5_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_BANDWIDTH_OUT.PART7_FREERUN",
      EventDef::Encoding{.code = 0x00, .umask = 0x00, .msr_values = {0x00}},
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      R"(Free running counter that increments for every 32 bytes of data sent from the IO agent to the SOC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_AND.BUS0",
      EventDef::Encoding{.code = 0x02, .umask = 0x01, .msr_values = {0x00}},
      R"(AND Mask/match for debug bus : Non-PCIE bus)",
      R"(AND Mask/match for debug bus : Non-PCIE bus : Asserted if all bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_AND.BUS1",
      EventDef::Encoding{.code = 0x02, .umask = 0x02, .msr_values = {0x00}},
      R"(AND Mask/match for debug bus : PCIE bus)",
      R"(AND Mask/match for debug bus : PCIE bus : Asserted if all bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_AND.BUS0_NOT_BUS1",
      EventDef::Encoding{.code = 0x02, .umask = 0x04, .msr_values = {0x00}},
      R"(AND Mask/match for debug bus : Non-PCIE bus and !(PCIE bus))",
      R"(AND Mask/match for debug bus : Non-PCIE bus and !(PCIE bus) : Asserted if all bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_AND.BUS0_BUS1",
      EventDef::Encoding{.code = 0x02, .umask = 0x08, .msr_values = {0x00}},
      R"(AND Mask/match for debug bus : Non-PCIE bus and PCIE bus)",
      R"(AND Mask/match for debug bus : Non-PCIE bus and PCIE bus : Asserted if all bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_AND.NOT_BUS0_BUS1",
      EventDef::Encoding{.code = 0x02, .umask = 0x10, .msr_values = {0x00}},
      R"(AND Mask/match for debug bus : !(Non-PCIE bus) and PCIE bus)",
      R"(AND Mask/match for debug bus : !(Non-PCIE bus) and PCIE bus : Asserted if all bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_AND.NOT_BUS0_NOT_BUS1",
      EventDef::Encoding{.code = 0x02, .umask = 0x20, .msr_values = {0x00}},
      R"(AND Mask/match for debug bus : !(Non-PCIE bus) and !(PCIE bus))",
      R"(AND Mask/match for debug bus : !(Non-PCIE bus) and !(PCIE bus) : Asserted if all bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_OR.BUS0",
      EventDef::Encoding{.code = 0x03, .umask = 0x01, .msr_values = {0x00}},
      R"(OR Mask/match for debug bus : Non-PCIE bus)",
      R"(OR Mask/match for debug bus : Non-PCIE bus : Asserted if any bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_OR.BUS1",
      EventDef::Encoding{.code = 0x03, .umask = 0x02, .msr_values = {0x00}},
      R"(OR Mask/match for debug bus : PCIE bus)",
      R"(OR Mask/match for debug bus : PCIE bus : Asserted if any bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_OR.BUS0_NOT_BUS1",
      EventDef::Encoding{.code = 0x03, .umask = 0x04, .msr_values = {0x00}},
      R"(OR Mask/match for debug bus : Non-PCIE bus and !(PCIE bus))",
      R"(OR Mask/match for debug bus : Non-PCIE bus and !(PCIE bus) : Asserted if any bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_OR.BUS0_BUS1",
      EventDef::Encoding{.code = 0x03, .umask = 0x08, .msr_values = {0x00}},
      R"(OR Mask/match for debug bus : Non-PCIE bus and PCIE bus)",
      R"(OR Mask/match for debug bus : Non-PCIE bus and PCIE bus : Asserted if any bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_OR.NOT_BUS0_BUS1",
      EventDef::Encoding{.code = 0x03, .umask = 0x10, .msr_values = {0x00}},
      R"(OR Mask/match for debug bus : !(Non-PCIE bus) and PCIE bus)",
      R"(OR Mask/match for debug bus : !(Non-PCIE bus) and PCIE bus : Asserted if any bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_MASK_MATCH_OR.NOT_BUS0_NOT_BUS1",
      EventDef::Encoding{.code = 0x03, .umask = 0x20, .msr_values = {0x00}},
      R"(OR Mask/match for debug bus : !(Non-PCIE bus) and !(PCIE bus))",
      R"(OR Mask/match for debug bus : !(Non-PCIE bus) and !(PCIE bus) : Asserted if any bits specified by mask match)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU0.FIRST_LOOKUPS",
      EventDef::Encoding{.code = 0x40, .umask = 0x01, .msr_values = {0x00}},
      R"(: IOTLB lookups first)",
      R"(: IOTLB lookups first : Some transactions have to look up IOTLB multiple times.  Counts the first time a request looks up IOTLB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU0.CTXT_CACHE_LOOKUPS",
      EventDef::Encoding{.code = 0x40, .umask = 0x40, .msr_values = {0x00}},
      R"(: Context cache lookups)",
      R"(: Context cache lookups : Counts each time a transaction looks up root context cache.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU0.CTXT_CACHE_HITS",
      EventDef::Encoding{.code = 0x40, .umask = 0x80, .msr_values = {0x00}},
      R"(: Context cache hits)",
      R"(: Context cache hits : Counts each time a first look up of the transaction hits the RCC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.PWT_CACHE_LOOKUPS",
      EventDef::Encoding{.code = 0x41, .umask = 0x01, .msr_values = {0x00}},
      R"(: PageWalk cache lookup)",
      R"(: PageWalk cache lookup : Counts each time a transaction looks up second level page walk cache.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.NUM_MEM_ACCESSES",
      EventDef::Encoding{.code = 0x41, .umask = 0xc0, .msr_values = {0x00}},
      R"(: IOMMU memory access)",
      R"(: IOMMU memory access : IOMMU sends out memory fetches when it misses the cache look up which is indicated by this signal.  M2IOSF only uses low priority channel)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.PWC_2M_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x02, .msr_values = {0x00}},
      R"(: PWC Hit to a 4K page)",
      R"(: PWC Hit to a 4K page : Counts each time a transaction's first look up hits the SLPWC at the 4K level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.PWC_1G_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x04, .msr_values = {0x00}},
      R"(: PWC Hit to a 2M page)",
      R"(: PWC Hit to a 2M page : Counts each time a transaction's first look up hits the SLPWC at the 2M level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.PWC_512G_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x08, .msr_values = {0x00}},
      R"(: PWC Hit to a 1G page)",
      R"(: PWC Hit to a 1G page : Counts each time a transaction's first look up hits the SLPWC at the 1G level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.PWC_256T_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x10, .msr_values = {0x00}},
      R"(: PWT Hit to a 256T page)",
      R"(: PWT Hit to a 256T page : Counts each time a transaction's first look up hits the SLPWC at the 512G level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.PWC_CACHE_FILLS",
      EventDef::Encoding{.code = 0x41, .umask = 0x20, .msr_values = {0x00}},
      R"(: PageWalk cache fill)",
      R"(: PageWalk cache fill : When a transaction misses SLPWC, it does a page walk to look up memory and bring in the relevant page translation. When this page translation is written to SLPWC, ObsPwcFillValid_nnnH is asserted.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART0",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART1",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART2",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART3",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART4",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x16 card plugged in to Lane 4/5/6/7, Or x8 card plugged in to Lane 4/5, Or x4 card is plugged in to slot 4)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART5",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 5)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART6",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x8 card plugged in to Lane 6/7, Or x4 card is plugged in to slot 6)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_OF_CPU.PEER_WRITE.PART7",
      EventDef::Encoding{.code = 0x84, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack))",
      R"(Number Transactions requested of the CPU : Card writing to another Card (same or different stack) : Also known as Inbound.  Number of 64B cache line requests initiated by the Card, including reads and writes. : x4 card is plugged in to slot 7)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_REQ.IOMMU_REQ",
      EventDef::Encoding{.code = 0x86, .umask = 0x01, .msr_values = {0x00}},
      R"(Incoming arbitration requests : Issuing to IOMMU)",
      R"(Incoming arbitration requests : Issuing to IOMMU : How often different queues (e.g. channel / fc) ask to send request into pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_REQ.IOMMU_HIT",
      EventDef::Encoding{.code = 0x86, .umask = 0x02, .msr_values = {0x00}},
      R"(Incoming arbitration requests : Processing response from IOMMU)",
      R"(Incoming arbitration requests : Processing response from IOMMU : How often different queues (e.g. channel / fc) ask to send request into pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_REQ.REQ_OWN",
      EventDef::Encoding{.code = 0x86, .umask = 0x04, .msr_values = {0x00}},
      R"(Incoming arbitration requests : Request Ownership)",
      R"(Incoming arbitration requests : Request Ownership : How often different queues (e.g. channel / fc) ask to send request into pipeline : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_REQ.FINAL_RD_WR",
      EventDef::Encoding{.code = 0x86, .umask = 0x08, .msr_values = {0x00}},
      R"(Incoming arbitration requests : Issuing final read or write of line)",
      R"(Incoming arbitration requests : Issuing final read or write of line : How often different queues (e.g. channel / fc) ask to send request into pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_REQ.WR",
      EventDef::Encoding{.code = 0x86, .umask = 0x10, .msr_values = {0x00}},
      R"(Incoming arbitration requests : Writing line)",
      R"(Incoming arbitration requests : Writing line : How often different queues (e.g. channel / fc) ask to send request into pipeline : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_REQ.DATA",
      EventDef::Encoding{.code = 0x86, .umask = 0x20, .msr_values = {0x00}},
      R"(Incoming arbitration requests : Passing data to be written)",
      R"(Incoming arbitration requests : Passing data to be written : How often different queues (e.g. channel / fc) ask to send request into pipeline : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_WON.IOMMU_REQ",
      EventDef::Encoding{.code = 0x87, .umask = 0x01, .msr_values = {0x00}},
      R"(Incoming arbitration requests granted : Issuing to IOMMU)",
      R"(Incoming arbitration requests granted : Issuing to IOMMU : How often different queues (e.g. channel / fc) are allowed to send request into pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_WON.IOMMU_HIT",
      EventDef::Encoding{.code = 0x87, .umask = 0x02, .msr_values = {0x00}},
      R"(Incoming arbitration requests granted : Processing response from IOMMU)",
      R"(Incoming arbitration requests granted : Processing response from IOMMU : How often different queues (e.g. channel / fc) are allowed to send request into pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_WON.REQ_OWN",
      EventDef::Encoding{.code = 0x87, .umask = 0x04, .msr_values = {0x00}},
      R"(Incoming arbitration requests granted : Request Ownership)",
      R"(Incoming arbitration requests granted : Request Ownership : How often different queues (e.g. channel / fc) are allowed to send request into pipeline : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_WON.FINAL_RD_WR",
      EventDef::Encoding{.code = 0x87, .umask = 0x08, .msr_values = {0x00}},
      R"(Incoming arbitration requests granted : Issuing final read or write of line)",
      R"(Incoming arbitration requests granted : Issuing final read or write of line : How often different queues (e.g. channel / fc) are allowed to send request into pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_WON.WR",
      EventDef::Encoding{.code = 0x87, .umask = 0x10, .msr_values = {0x00}},
      R"(Incoming arbitration requests granted : Writing line)",
      R"(Incoming arbitration requests granted : Writing line : How often different queues (e.g. channel / fc) are allowed to send request into pipeline : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_INBOUND_ARB_WON.DATA",
      EventDef::Encoding{.code = 0x87, .umask = 0x20, .msr_values = {0x00}},
      R"(Incoming arbitration requests granted : Passing data to be written)",
      R"(Incoming arbitration requests granted : Passing data to be written : How often different queues (e.g. channel / fc) are allowed to send request into pipeline : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.MSGB",
      EventDef::Encoding{.code = 0x8e, .umask = 0x01, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : MsgB)",
      R"(Num requests sent by PCIe - by target : MsgB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.MCAST",
      EventDef::Encoding{.code = 0x8e, .umask = 0x02, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Multi-cast)",
      R"(Num requests sent by PCIe - by target : Multi-cast)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.UBOX",
      EventDef::Encoding{.code = 0x8e, .umask = 0x04, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Ubox)",
      R"(Num requests sent by PCIe - by target : Ubox)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.MEM",
      EventDef::Encoding{.code = 0x8e, .umask = 0x08, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Memory)",
      R"(Num requests sent by PCIe - by target : Memory)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.REM_P2P",
      EventDef::Encoding{.code = 0x8e, .umask = 0x10, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Remote P2P)",
      R"(Num requests sent by PCIe - by target : Remote P2P)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.LOC_P2P",
      EventDef::Encoding{.code = 0x8e, .umask = 0x20, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Local P2P)",
      R"(Num requests sent by PCIe - by target : Local P2P)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.CONFINED_P2P",
      EventDef::Encoding{.code = 0x8e, .umask = 0x40, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Confined P2P)",
      R"(Num requests sent by PCIe - by target : Confined P2P)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_REQ_OF_CPU_BY_TGT.ABORT",
      EventDef::Encoding{.code = 0x8e, .umask = 0x80, .msr_values = {0x00}},
      R"(Num requests sent by PCIe - by target : Abort)",
      R"(Num requests sent by PCIe - by target : Abort)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_NUM_TGT_MATCHED_REQ_OF_CPU",
      EventDef::Encoding{.code = 0x8f, .umask = 0x00, .msr_values = {0x00}},
      R"(ITC address map 1)",
      R"(UNC_IIO_NUM_TGT_MATCHED_REQ_OF_CPU)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_PASS_CMPL.REQ_OWN",
      EventDef::Encoding{.code = 0x90, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Request - pass complete : Request Ownership)",
      R"(PCIe Request - pass complete : Request Ownership : Each PCIe request is broken down into a series of cacheline granular requests and each cacheline size request may need to make multiple passes through the pipeline (e.g. for posted interrupts or multi-cast).   Each time a cacheline completes a single pass (e.g. posts a write to single multi-cast target) it advances state : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_PASS_CMPL.FINAL_RD_WR",
      EventDef::Encoding{.code = 0x90, .umask = 0x08, .msr_values = {0x00}},
      R"(PCIe Request - pass complete : Issuing final read or write of line)",
      R"(PCIe Request - pass complete : Issuing final read or write of line : Each PCIe request is broken down into a series of cacheline granular requests and each cacheline size request may need to make multiple passes through the pipeline (e.g. for posted interrupts or multi-cast).   Each time a cacheline completes a single pass (e.g. posts a write to single multi-cast target) it advances state)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_PASS_CMPL.WR",
      EventDef::Encoding{.code = 0x90, .umask = 0x10, .msr_values = {0x00}},
      R"(PCIe Request - pass complete : Writing line)",
      R"(PCIe Request - pass complete : Writing line : Each PCIe request is broken down into a series of cacheline granular requests and each cacheline size request may need to make multiple passes through the pipeline (e.g. for posted interrupts or multi-cast).   Each time a cacheline completes a single pass (e.g. posts a write to single multi-cast target) it advances state : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_PASS_CMPL.DATA",
      EventDef::Encoding{.code = 0x90, .umask = 0x20, .msr_values = {0x00}},
      R"(PCIe Request - pass complete : Passing data to be written)",
      R"(PCIe Request - pass complete : Passing data to be written : Each PCIe request is broken down into a series of cacheline granular requests and each cacheline size request may need to make multiple passes through the pipeline (e.g. for posted interrupts or multi-cast).   Each time a cacheline completes a single pass (e.g. posts a write to single multi-cast target) it advances state : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CL_CMPL.REQ_OWN",
      EventDef::Encoding{.code = 0x91, .umask = 0x04, .msr_values = {0x00}},
      R"(Request Ownership : Issuing final read or write of line)",
      R"(Request Ownership : Issuing final read or write of line : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CL_CMPL.FINAL_RD_WR",
      EventDef::Encoding{.code = 0x91, .umask = 0x08, .msr_values = {0x00}},
      R"(Request Ownership : Writing line)",
      R"(Request Ownership : Writing line : Only for posted requests : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CL_CMPL.WR",
      EventDef::Encoding{.code = 0x91, .umask = 0x10, .msr_values = {0x00}},
      R"(Request Ownership : Passing data to be written)",
      R"(Request Ownership : Passing data to be written : Only for posted requests : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CL_CMPL.DATA",
      EventDef::Encoding{.code = 0x91, .umask = 0x20, .msr_values = {0x00}},
      R"(Request Ownership : PCIe Request complete)",
      R"(Request Ownership : PCIe Request complete : Only for posted requests : Each PCIe request is broken down into a series of cacheline granular requests and each cacheline size request may need to make multiple passes through the pipeline (e.g. for posted interrupts or multi-cast).   Each time a single PCIe request completes all its cacheline granular requests, it advances pointer.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CMPL.IOMMU_REQ",
      EventDef::Encoding{.code = 0x92, .umask = 0x01, .msr_values = {0x00}},
      R"(Processing response from IOMMU : Request Ownership)",
      R"(Processing response from IOMMU : Request Ownership : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CMPL.IOMMU_HIT",
      EventDef::Encoding{.code = 0x92, .umask = 0x02, .msr_values = {0x00}},
      R"(Processing response from IOMMU : Issuing final read or write of line)",
      R"(Processing response from IOMMU : Issuing final read or write of line)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CMPL.REQ_OWN",
      EventDef::Encoding{.code = 0x92, .umask = 0x04, .msr_values = {0x00}},
      R"(Processing response from IOMMU : Writing line)",
      R"(Processing response from IOMMU : Writing line : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_REQ_FROM_PCIE_CMPL.FINAL_RD_WR",
      EventDef::Encoding{.code = 0x92, .umask = 0x08, .msr_values = {0x00}},
      R"(Processing response from IOMMU : Passing data to be written)",
      R"(Processing response from IOMMU : Passing data to be written : Only for posted requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.MEM_WRITE.IOMMU0",
      EventDef::Encoding{.code = 0xc0, .umask = 0x01, .msr_values = {0x00}},
      R"(Data requested by the CPU : Core writing to Cards MMIO space)",
      R"(Data requested by the CPU : Core writing to Cards MMIO space : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : IOMMU - Type 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.MEM_WRITE.IOMMU1",
      EventDef::Encoding{.code = 0xc0, .umask = 0x01, .msr_values = {0x00}},
      R"(Data requested by the CPU : Core writing to Cards MMIO space)",
      R"(Data requested by the CPU : Core writing to Cards MMIO space : Number of DWs (4 bytes) requested by the main die.  Includes all requests initiated by the main die, including reads and writes. : IOMMU - Type 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART0",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART1",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART2",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART3",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART4",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x16 card plugged in to Lane 4/5/6/7, Or x8 card plugged in to Lane 4/5, Or x4 card is plugged in to slot 4)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART5",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 5)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART6",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x8 card plugged in to Lane 6/7, Or x4 card is plugged in to slot 6)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_TXN_REQ_BY_CPU.PEER_WRITE.PART7",
      EventDef::Encoding{.code = 0xc1, .umask = 0x02, .msr_values = {0x00}},
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card.)",
      R"(Number Transactions requested by the CPU : Another card (different IIO stack) writing to this card. : Also known as Outbound.  Number of requests initiated by the main die, including reads and writes. : x4 card is plugged in to slot 7)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART0",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 0)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 0 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART1",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 1)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 1 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART2",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 2)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 2 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART3",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 3)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 2 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART4",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 4)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 0 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 4)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART5",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 5)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 1 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 5)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART6",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 6)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 2 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 6)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.PART7",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 7)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 2 : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 7)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_INSERTS.CMPD.ALL_PARTS",
      EventDef::Encoding{.code = 0xc2, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Inserts of completions with data: Part 0-7)",
      R"(PCIe Completion Buffer Inserts of completions with data : Part 0-7)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_OUTBOUND_CL_REQS_ISSUED.TO_IO",
      EventDef::Encoding{.code = 0xd0, .umask = 0x08, .msr_values = {0x00}},
      R"(Outbound cacheline requests issued : 64B requests issued to device)",
      R"(Outbound cacheline requests issued : 64B requests issued to device : Each outbound cacheline granular request may need to make multiple passes through the pipeline.  Each time a cacheline completes all its passes it advances line)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_OUTBOUND_TLP_REQS_ISSUED.TO_IO",
      EventDef::Encoding{.code = 0xd1, .umask = 0x08, .msr_values = {0x00}},
      R"(Outbound TLP (transaction layer packet) requests issued : To device)",
      R"(Outbound TLP (transaction layer packet) requests issued : To device : Each time an outbound completes all its passes it advances the pointer)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART0",
      EventDef::Encoding{.code = 0xd5, .umask = 0x01, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 0)",
      R"(x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART7",
      EventDef::Encoding{.code = 0xd5, .umask = 0x80, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 7)",
      R"(x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART6",
      EventDef::Encoding{.code = 0xd5, .umask = 0x40, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 6)",
      R"(x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART5",
      EventDef::Encoding{.code = 0xd5, .umask = 0x20, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 5)",
      R"(x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART4",
      EventDef::Encoding{.code = 0xd5, .umask = 0x10, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 4)",
      R"(x16 card plugged in to stack, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART3",
      EventDef::Encoding{.code = 0xd5, .umask = 0x08, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 3)",
      R"(x4 card is plugged in to slot 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART2",
      EventDef::Encoding{.code = 0xd5, .umask = 0x04, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 2)",
      R"(x8 card plugged in to Lane 2/3, Or x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.PART1",
      EventDef::Encoding{.code = 0xd5, .umask = 0x02, .msr_values = {0x00}},
      R"(PCIe Completion Buffer Occupancy : Part 1)",
      R"(x4 card is plugged in to slot 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.ALL_PARTS",
      EventDef::Encoding{.code = 0xd5, .umask = 0xff, .msr_values = {0x00}},
      R"(UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.ALL_PARTS)",
      R"(UNC_IIO_COMP_BUF_OCCUPANCY.CMPD.ALL_PARTS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_CACHE_TOTAL_OCCUPANCY.MEM",
      EventDef::Encoding{.code = 0x0f, .umask = 0x04, .msr_values = {0x00}},
      R"(Total IRP occupancy of inbound read and write requests to coherent memory.)",
      R"(Total IRP occupancy of inbound read and write requests to coherent memory.  This is effectively the sum of read occupancy and write occupancy.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.2ND_ATOMIC_INSERT",
      EventDef::Encoding{.code = 0x1e, .umask = 0x10, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Cache Inserts of Atomic Transactions as Secondary)",
      R"(Counts Timeouts - Set 0 : Cache Inserts of Atomic Transactions as Secondary)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.2ND_RD_INSERT",
      EventDef::Encoding{.code = 0x1e, .umask = 0x04, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Cache Inserts of Read Transactions as Secondary)",
      R"(Counts Timeouts - Set 0 : Cache Inserts of Read Transactions as Secondary)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.2ND_WR_INSERT",
      EventDef::Encoding{.code = 0x1e, .umask = 0x08, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Cache Inserts of Write Transactions as Secondary)",
      R"(Counts Timeouts - Set 0 : Cache Inserts of Write Transactions as Secondary)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.FAST_REJ",
      EventDef::Encoding{.code = 0x1e, .umask = 0x02, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Fastpath Rejects)",
      R"(Counts Timeouts - Set 0 : Fastpath Rejects)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.FAST_REQ",
      EventDef::Encoding{.code = 0x1e, .umask = 0x01, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Fastpath Requests)",
      R"(Counts Timeouts - Set 0 : Fastpath Requests)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.FAST_XFER",
      EventDef::Encoding{.code = 0x1e, .umask = 0x20, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Fastpath Transfers From Primary to Secondary)",
      R"(Counts Timeouts - Set 0 : Fastpath Transfers From Primary to Secondary)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.PF_ACK_HINT",
      EventDef::Encoding{.code = 0x1e, .umask = 0x40, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Prefetch Ack Hints From Primary to Secondary)",
      R"(Counts Timeouts - Set 0 : Prefetch Ack Hints From Primary to Secondary)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_MISC0.SLOWPATH_FWPF_NO_PRF",
      EventDef::Encoding{.code = 0x1e, .umask = 0x80, .msr_values = {0x00}},
      R"(Counts Timeouts - Set 0 : Slow path fwpf didn't find prefetch)",
      R"(Counts Timeouts - Set 0 : Slow path fwpf didn't find prefetch)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.ALL_HIT",
      EventDef::Encoding{.code = 0x12, .umask = 0x7e, .msr_values = {0x00}},
      R"(Responses to snoops of any type that hit M, E, S or I line in the IIO)",
      R"(Responses to snoops of any type (code, data, invalidate) that hit M, E, S or I line in the IIO)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.ALL_HIT_ES",
      EventDef::Encoding{.code = 0x12, .umask = 0x74, .msr_values = {0x00}},
      R"(Responses to snoops of any type that hit E or S line in the IIO cache)",
      R"(Responses to snoops of any type (code, data, invalidate) that hit E or S line in the IIO cache)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.ALL_HIT_I",
      EventDef::Encoding{.code = 0x12, .umask = 0x72, .msr_values = {0x00}},
      R"(Responses to snoops of any type that hit I line in the IIO cache)",
      R"(Responses to snoops of any type (code, data, invalidate) that hit I line in the IIO cache)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.ALL_MISS",
      EventDef::Encoding{.code = 0x12, .umask = 0x71, .msr_values = {0x00}},
      R"(Responses to snoops of any type that miss the IIO cache)",
      R"(Responses to snoops of any type (code, data, invalidate) that miss the IIO cache)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.HIT_ES",
      EventDef::Encoding{.code = 0x12, .umask = 0x04, .msr_values = {0x00}},
      R"(Snoop Responses : Hit E or S)",
      R"(Snoop Responses : Hit E or S)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.HIT_I",
      EventDef::Encoding{.code = 0x12, .umask = 0x02, .msr_values = {0x00}},
      R"(Snoop Responses : Hit I)",
      R"(Snoop Responses : Hit I)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.HIT_M",
      EventDef::Encoding{.code = 0x12, .umask = 0x08, .msr_values = {0x00}},
      R"(Snoop Responses : Hit M)",
      R"(Snoop Responses : Hit M)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.MISS",
      EventDef::Encoding{.code = 0x12, .umask = 0x01, .msr_values = {0x00}},
      R"(Snoop Responses : Miss)",
      R"(Snoop Responses : Miss)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.SNPCODE",
      EventDef::Encoding{.code = 0x12, .umask = 0x10, .msr_values = {0x00}},
      R"(Snoop Responses : SnpCode)",
      R"(Snoop Responses : SnpCode)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.SNPDATA",
      EventDef::Encoding{.code = 0x12, .umask = 0x20, .msr_values = {0x00}},
      R"(Snoop Responses : SnpData)",
      R"(Snoop Responses : SnpData)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_SNOOP_RESP.SNPINV",
      EventDef::Encoding{.code = 0x12, .umask = 0x40, .msr_values = {0x00}},
      R"(Snoop Responses : SnpInv)",
      R"(Snoop Responses : SnpInv)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_AK_INSERTS",
      EventDef::Encoding{.code = 0x0b, .umask = 0x00, .msr_values = {0x00}},
      R"(AK Egress Allocations)",
      R"(AK Egress Allocations)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_DRS_CYCLES_FULL",
      EventDef::Encoding{.code = 0x05, .umask = 0x00, .msr_values = {0x00}},
      R"(BL DRS Egress Cycles Full)",
      R"(BL DRS Egress Cycles Full)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_DRS_INSERTS",
      EventDef::Encoding{.code = 0x02, .umask = 0x00, .msr_values = {0x00}},
      R"(BL DRS Egress Inserts)",
      R"(BL DRS Egress Inserts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_DRS_OCCUPANCY",
      EventDef::Encoding{.code = 0x08, .umask = 0x00, .msr_values = {0x00}},
      R"(BL DRS Egress Occupancy)",
      R"(BL DRS Egress Occupancy)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_NCB_CYCLES_FULL",
      EventDef::Encoding{.code = 0x06, .umask = 0x00, .msr_values = {0x00}},
      R"(BL NCB Egress Cycles Full)",
      R"(BL NCB Egress Cycles Full)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_NCB_INSERTS",
      EventDef::Encoding{.code = 0x03, .umask = 0x00, .msr_values = {0x00}},
      R"(BL NCB Egress Inserts)",
      R"(BL NCB Egress Inserts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_NCB_OCCUPANCY",
      EventDef::Encoding{.code = 0x09, .umask = 0x00, .msr_values = {0x00}},
      R"(BL NCB Egress Occupancy)",
      R"(BL NCB Egress Occupancy)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_NCS_CYCLES_FULL",
      EventDef::Encoding{.code = 0x07, .umask = 0x00, .msr_values = {0x00}},
      R"(BL NCS Egress Cycles Full)",
      R"(BL NCS Egress Cycles Full)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_NCS_INSERTS",
      EventDef::Encoding{.code = 0x04, .umask = 0x00, .msr_values = {0x00}},
      R"(BL NCS Egress Inserts)",
      R"(BL NCS Egress Inserts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxC_BL_NCS_OCCUPANCY",
      EventDef::Encoding{.code = 0x0a, .umask = 0x00, .msr_values = {0x00}},
      R"(BL NCS Egress Occupancy)",
      R"(BL NCS Egress Occupancy)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxR2_AD0_STALL_CREDIT_CYCLES",
      EventDef::Encoding{.code = 0x1a, .umask = 0x00, .msr_values = {0x00}},
      R"(No AD0 Egress Credits Stalls)",
      R"(No AD0 Egress Credits Stalls : Counts the number times when it is not possible to issue a request to the M2PCIe because there are no AD0 Egress Credits available.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxR2_AD01_STALL_CREDIT_CYCLES",
      EventDef::Encoding{.code = 0x1c, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_I_TxR2_AD01_STALL_CREDIT_CYCLES)",
      R"(: Counts the number times when it is not possible to issue a request to the M2PCIe because there are no Egress Credits available on AD0, A1 or AD0AD1 both. Stalls on both AD0 and AD1 will count as 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxR2_AD1_STALL_CREDIT_CYCLES",
      EventDef::Encoding{.code = 0x1b, .umask = 0x00, .msr_values = {0x00}},
      R"(No AD1 Egress Credits Stalls)",
      R"(No AD1 Egress Credits Stalls : Counts the number times when it is not possible to issue a request to the M2PCIe because there are no AD1 Egress Credits available.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxR2_BL_STALL_CREDIT_CYCLES",
      EventDef::Encoding{.code = 0x1d, .umask = 0x00, .msr_values = {0x00}},
      R"(No BL Egress Credit Stalls)",
      R"(No BL Egress Credit Stalls : Counts the number times when it is not possible to issue data to the R2PCIe because there are no BL Egress Credits available.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxS_DATA_INSERTS_NCB",
      EventDef::Encoding{.code = 0x0d, .umask = 0x00, .msr_values = {0x00}},
      R"(Outbound Read Requests)",
      R"(Outbound Read Requests : Counts the number of requests issued to the switch (towards the devices).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxS_DATA_INSERTS_NCS",
      EventDef::Encoding{.code = 0x0e, .umask = 0x00, .msr_values = {0x00}},
      R"(Outbound Read Requests)",
      R"(Outbound Read Requests : Counts the number of requests issued to the switch (towards the devices).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_irp,
      "UNC_I_TxS_REQUEST_OCCUPANCY",
      EventDef::Encoding{.code = 0x0c, .umask = 0x00, .msr_values = {0x00}},
      R"(Outbound Request Queue Occupancy)",
      R"(Outbound Request Queue Occupancy : Accumulates the number of outstanding outbound requests from the IRP to the switch (towards the devices).  This can be used in conjunction with the allocations event in order to calculate average latency of outbound requests.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_CORE_TRANSITION_CYCLES",
      EventDef::Encoding{.code = 0x60, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_P_CORE_TRANSITION_CYCLES)",
      R"(UNC_P_CORE_TRANSITION_CYCLES)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_DEMOTIONS",
      EventDef::Encoding{.code = 0x30, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_P_DEMOTIONS)",
      R"(UNC_P_DEMOTIONS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FIVR_PS_PS0_CYCLES",
      EventDef::Encoding{.code = 0x75, .umask = 0x00, .msr_values = {0x00}},
      R"(Phase Shed 0 Cycles)",
      R"(Phase Shed 0 Cycles : Cycles spent in phase-shedding power state 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FIVR_PS_PS1_CYCLES",
      EventDef::Encoding{.code = 0x76, .umask = 0x00, .msr_values = {0x00}},
      R"(Phase Shed 1 Cycles)",
      R"(Phase Shed 1 Cycles : Cycles spent in phase-shedding power state 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FIVR_PS_PS2_CYCLES",
      EventDef::Encoding{.code = 0x77, .umask = 0x00, .msr_values = {0x00}},
      R"(Phase Shed 2 Cycles)",
      R"(Phase Shed 2 Cycles : Cycles spent in phase-shedding power state 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FIVR_PS_PS3_CYCLES",
      EventDef::Encoding{.code = 0x78, .umask = 0x00, .msr_values = {0x00}},
      R"(Phase Shed 3 Cycles)",
      R"(Phase Shed 3 Cycles : Cycles spent in phase-shedding power state 3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FREQ_CLIP_AVX256",
      EventDef::Encoding{.code = 0x49, .umask = 0x00, .msr_values = {0x00}},
      R"(AVX256 Frequency Clipping)",
      R"(AVX256 Frequency Clipping)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FREQ_CLIP_AVX512",
      EventDef::Encoding{.code = 0x4a, .umask = 0x00, .msr_values = {0x00}},
      R"(AVX512 Frequency Clipping)",
      R"(AVX512 Frequency Clipping)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FREQ_MAX_LIMIT_THERMAL_CYCLES",
      EventDef::Encoding{.code = 0x04, .umask = 0x00, .msr_values = {0x00}},
      R"(Thermal Strongest Upper Limit Cycles)",
      R"(Thermal Strongest Upper Limit Cycles : Number of cycles any frequency is reduced due to a thermal limit.  Count only if throttling is occurring.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FREQ_MAX_POWER_CYCLES",
      EventDef::Encoding{.code = 0x05, .umask = 0x00, .msr_values = {0x00}},
      R"(Power Strongest Upper Limit Cycles)",
      R"(Power Strongest Upper Limit Cycles : Counts the number of cycles when power is the upper limit on frequency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FREQ_MIN_IO_P_CYCLES",
      EventDef::Encoding{.code = 0x73, .umask = 0x00, .msr_values = {0x00}},
      R"(IO P Limit Strongest Lower Limit Cycles)",
      R"(IO P Limit Strongest Lower Limit Cycles : Counts the number of cycles when IO P Limit is preventing us from dropping the frequency lower.  This algorithm monitors the needs to the IO subsystem on both local and remote sockets and will maintain a frequency high enough to maintain good IO BW.  This is necessary for when all the IA cores on a socket are idle but a user still would like to maintain high IO Bandwidth.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_FREQ_TRANS_CYCLES",
      EventDef::Encoding{.code = 0x74, .umask = 0x00, .msr_values = {0x00}},
      R"(Cycles spent changing Frequency)",
      R"(Cycles spent changing Frequency : Counts the number of cycles when the system is changing frequency.  This can not be filtered by thread ID.  One can also use it with the occupancy counter that monitors number of threads in C0 to estimate the performance impact that frequency transitions had on the system.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_MEMORY_PHASE_SHEDDING_CYCLES",
      EventDef::Encoding{.code = 0x2f, .umask = 0x00, .msr_values = {0x00}},
      R"(Memory Phase Shedding Cycles)",
      R"(Memory Phase Shedding Cycles : Counts the number of cycles that the PCU has triggered memory phase shedding.  This is a mode that can be run in the iMC physicals that saves power at the expense of additional latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_PKG_RESIDENCY_C0_CYCLES",
      EventDef::Encoding{.code = 0x2a, .umask = 0x00, .msr_values = {0x00}},
      R"(Package C State Residency - C0)",
      R"(Package C State Residency - C0 : Counts the number of cycles when the package was in C0.  This event can be used in conjunction with edge detect to count C0 entrances (or exits using invert).  Residency events do not include transition times.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_PKG_RESIDENCY_C2E_CYCLES",
      EventDef::Encoding{.code = 0x2b, .umask = 0x00, .msr_values = {0x00}},
      R"(Package C State Residency - C2E)",
      R"(Package C State Residency - C2E : Counts the number of cycles when the package was in C2E.  This event can be used in conjunction with edge detect to count C2E entrances (or exits using invert).  Residency events do not include transition times.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_PKG_RESIDENCY_C6_CYCLES",
      EventDef::Encoding{.code = 0x2d, .umask = 0x00, .msr_values = {0x00}},
      R"(Package C State Residency - C6)",
      R"(Package C State Residency - C6 : Counts the number of cycles when the package was in C6.  This event can be used in conjunction with edge detect to count C6 entrances (or exits using invert).  Residency events do not include transition times.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_PMAX_THROTTLED_CYCLES",
      EventDef::Encoding{.code = 0x06, .umask = 0x00, .msr_values = {0x00}},
      R"(UNC_P_PMAX_THROTTLED_CYCLES)",
      R"(UNC_P_PMAX_THROTTLED_CYCLES)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_POWER_STATE_OCCUPANCY_CORES_C0",
      EventDef::Encoding{.code = 0x35, .umask = 0x00, .msr_values = {0x00}},
      R"(Number of cores in C0)",
      R"(Number of cores in C0 : This is an occupancy event that tracks the number of cores that are in the chosen C-State.  It can be used by itself to get the average number of cores in that C-state with thresholding to generate histograms, or with other PCU events and occupancy triggering to capture other details.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_POWER_STATE_OCCUPANCY_CORES_C3",
      EventDef::Encoding{.code = 0x36, .umask = 0x00, .msr_values = {0x00}},
      R"(Number of cores in C3)",
      R"(Number of cores in C3 : This is an occupancy event that tracks the number of cores that are in the chosen C-State.  It can be used by itself to get the average number of cores in that C-state with thresholding to generate histograms, or with other PCU events and occupancy triggering to capture other details.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_POWER_STATE_OCCUPANCY_CORES_C6",
      EventDef::Encoding{.code = 0x37, .umask = 0x00, .msr_values = {0x00}},
      R"(Number of cores in C6)",
      R"(Number of cores in C6 : This is an occupancy event that tracks the number of cores that are in the chosen C-State.  It can be used by itself to get the average number of cores in that C-state with thresholding to generate histograms, or with other PCU events and occupancy triggering to capture other details.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_PROCHOT_EXTERNAL_CYCLES",
      EventDef::Encoding{.code = 0x0a, .umask = 0x00, .msr_values = {0x00}},
      R"(External Prochot)",
      R"(External Prochot : Counts the number of cycles that we are in external PROCHOT mode.  This mode is triggered when a sensor off the die determines that something off-die (like DRAM) is too hot and must throttle to avoid damaging the chip.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_PROCHOT_INTERNAL_CYCLES",
      EventDef::Encoding{.code = 0x09, .umask = 0x00, .msr_values = {0x00}},
      R"(Internal Prochot)",
      R"(Internal Prochot : Counts the number of cycles that we are in Internal PROCHOT mode.  This mode is triggered when a sensor on the die determines that we are too hot and must throttle to avoid damaging the chip.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_TOTAL_TRANSITION_CYCLES",
      EventDef::Encoding{.code = 0x72, .umask = 0x00, .msr_values = {0x00}},
      R"(Total Core C State Transition Cycles)",
      R"(Total Core C State Transition Cycles : Number of cycles spent performing core C state transitions across all cores.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_pcu,
      "UNC_P_VR_HOT_CYCLES",
      EventDef::Encoding{.code = 0x42, .umask = 0x00, .msr_values = {0x00}},
      R"(VR Hot)",
      R"(VR Hot : Number of cycles that a CPU SVID VR is hot.  Does not cover DRAM VRs)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.RxC_CYCLES_NE_CBO_NCB",
      EventDef::Encoding{.code = 0x4d, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_CBO_NCB)",
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_CBO_NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.RxC_CYCLES_NE_CBO_NCS",
      EventDef::Encoding{.code = 0x4d, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_CBO_NCS)",
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_CBO_NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.RxC_CYCLES_NE_UPI_NCB",
      EventDef::Encoding{.code = 0x4d, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_UPI_NCB)",
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_UPI_NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.RxC_CYCLES_NE_UPI_NCS",
      EventDef::Encoding{.code = 0x4d, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_UPI_NCS)",
      R"(UNC_U_M2U_MISC1.RxC_CYCLES_NE_UPI_NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_CBO_NCB",
      EventDef::Encoding{.code = 0x4d, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_CBO_NCB)",
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_CBO_NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_CBO_NCS",
      EventDef::Encoding{.code = 0x4d, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_CBO_NCS)",
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_CBO_NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_UPI_NCB",
      EventDef::Encoding{.code = 0x4d, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_UPI_NCB)",
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_UPI_NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_UPI_NCS",
      EventDef::Encoding{.code = 0x4d, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_UPI_NCS)",
      R"(UNC_U_M2U_MISC1.TxC_CYCLES_CRD_OVF_UPI_NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.RxC_CYCLES_EMPTY_BL",
      EventDef::Encoding{.code = 0x4e, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.RxC_CYCLES_EMPTY_BL)",
      R"(UNC_U_M2U_MISC2.RxC_CYCLES_EMPTY_BL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.RxC_CYCLES_FULL_BL",
      EventDef::Encoding{.code = 0x4e, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.RxC_CYCLES_FULL_BL)",
      R"(UNC_U_M2U_MISC2.RxC_CYCLES_FULL_BL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.TxC_CYCLES_CRD_OVF_VN0_NCB",
      EventDef::Encoding{.code = 0x4e, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_CRD_OVF_VN0_NCB)",
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_CRD_OVF_VN0_NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.TxC_CYCLES_CRD_OVF_VN0_NCS",
      EventDef::Encoding{.code = 0x4e, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_CRD_OVF_VN0_NCS)",
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_CRD_OVF_VN0_NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_AK",
      EventDef::Encoding{.code = 0x4e, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_AK)",
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_AK)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_AKC",
      EventDef::Encoding{.code = 0x4e, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_AKC)",
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_AKC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_BL",
      EventDef::Encoding{.code = 0x4e, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_BL)",
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_EMPTY_BL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC2.TxC_CYCLES_FULL_BL",
      EventDef::Encoding{.code = 0x4e, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_FULL_BL)",
      R"(UNC_U_M2U_MISC2.TxC_CYCLES_FULL_BL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC3.TxC_CYCLES_FULL_AK",
      EventDef::Encoding{.code = 0x4f, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC3.TxC_CYCLES_FULL_AK)",
      R"(UNC_U_M2U_MISC3.TxC_CYCLES_FULL_AK)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_ubox,
      "UNC_U_M2U_MISC3.TxC_CYCLES_FULL_AKC",
      EventDef::Encoding{.code = 0x4f, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_U_M2U_MISC3.TxC_CYCLES_FULL_AKC)",
      R"(UNC_U_M2U_MISC3.TxC_CYCLES_FULL_AKC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.CHA_IDI",
      EventDef::Encoding{.code = 0x10, .umask = 0x01, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.CHA_NCB",
      EventDef::Encoding{.code = 0x10, .umask = 0x02, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.CHA_NCS",
      EventDef::Encoding{.code = 0x10, .umask = 0x04, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.UPI_NCB",
      EventDef::Encoding{.code = 0x10, .umask = 0x08, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.UPI_NCS",
      EventDef::Encoding{.code = 0x10, .umask = 0x10, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.IIO_NCB",
      EventDef::Encoding{.code = 0x10, .umask = 0x20, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.IIO_NCS",
      EventDef::Encoding{.code = 0x10, .umask = 0x40, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_CYCLES_NE.ALL",
      EventDef::Encoding{.code = 0x10, .umask = 0x80, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Cycles Not Empty)",
      R"(Ingress (from CMS) Queue Cycles Not Empty : Counts the number of cycles when the M2PCIe Ingress is not empty.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.CHA_IDI",
      EventDef::Encoding{.code = 0x11, .umask = 0x01, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.CHA_NCB",
      EventDef::Encoding{.code = 0x11, .umask = 0x02, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.CHA_NCS",
      EventDef::Encoding{.code = 0x11, .umask = 0x04, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.UPI_NCB",
      EventDef::Encoding{.code = 0x11, .umask = 0x08, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.UPI_NCS",
      EventDef::Encoding{.code = 0x11, .umask = 0x10, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.IIO_NCB",
      EventDef::Encoding{.code = 0x11, .umask = 0x20, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.IIO_NCS",
      EventDef::Encoding{.code = 0x11, .umask = 0x40, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_RxC_INSERTS.ALL",
      EventDef::Encoding{.code = 0x11, .umask = 0x80, .msr_values = {0x00}},
      R"(Ingress (from CMS) Queue Inserts)",
      R"(Ingress (from CMS) Queue Inserts : Counts the number of entries inserted into the M2PCIe Ingress Queue.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue latency.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_CRD_OCCUPANCY.LOCAL_NCB",
      EventDef::Encoding{.code = 0x14, .umask = 0x01, .msr_values = {0x00}},
      R"(P2P Credit Occupancy : Local NCB)",
      R"(P2P Credit Occupancy : Local NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_CRD_OCCUPANCY.LOCAL_NCS",
      EventDef::Encoding{.code = 0x14, .umask = 0x02, .msr_values = {0x00}},
      R"(P2P Credit Occupancy : Local NCS)",
      R"(P2P Credit Occupancy : Local NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_CRD_OCCUPANCY.REMOTE_NCB",
      EventDef::Encoding{.code = 0x14, .umask = 0x04, .msr_values = {0x00}},
      R"(P2P Credit Occupancy : Remote NCB)",
      R"(P2P Credit Occupancy : Remote NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_CRD_OCCUPANCY.REMOTE_NCS",
      EventDef::Encoding{.code = 0x14, .umask = 0x08, .msr_values = {0x00}},
      R"(P2P Credit Occupancy : Remote NCS)",
      R"(P2P Credit Occupancy : Remote NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_CRD_OCCUPANCY.ALL",
      EventDef::Encoding{.code = 0x14, .umask = 0x10, .msr_values = {0x00}},
      R"(P2P Credit Occupancy : All)",
      R"(P2P Credit Occupancy : All)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_SHAR_RECEIVED.LOCAL_NCB",
      EventDef::Encoding{.code = 0x15, .umask = 0x01, .msr_values = {0x00}},
      R"(Shared Credits  Received : Local NCB)",
      R"(Shared Credits  Received : Local NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_SHAR_RECEIVED.LOCAL_NCS",
      EventDef::Encoding{.code = 0x15, .umask = 0x02, .msr_values = {0x00}},
      R"(Shared Credits  Received : Local NCS)",
      R"(Shared Credits  Received : Local NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_SHAR_RECEIVED.REMOTE_NCB",
      EventDef::Encoding{.code = 0x15, .umask = 0x04, .msr_values = {0x00}},
      R"(Shared Credits  Received : Remote NCB)",
      R"(Shared Credits  Received : Remote NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_SHAR_RECEIVED.REMOTE_NCS",
      EventDef::Encoding{.code = 0x15, .umask = 0x08, .msr_values = {0x00}},
      R"(Shared Credits  Received : Remote NCS)",
      R"(Shared Credits  Received : Remote NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_SHAR_RECEIVED.ALL",
      EventDef::Encoding{.code = 0x15, .umask = 0x10, .msr_values = {0x00}},
      R"(Shared Credits  Received : All)",
      R"(Shared Credits  Received : All)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_DED_RECEIVED.LOCAL_NCB",
      EventDef::Encoding{.code = 0x16, .umask = 0x01, .msr_values = {0x00}},
      R"(Dedicated Credits Received : Local NCB)",
      R"(Dedicated Credits Received : Local NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_DED_RECEIVED.LOCAL_NCS",
      EventDef::Encoding{.code = 0x16, .umask = 0x02, .msr_values = {0x00}},
      R"(Dedicated Credits Received : Local NCS)",
      R"(Dedicated Credits Received : Local NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_DED_RECEIVED.REMOTE_NCB",
      EventDef::Encoding{.code = 0x16, .umask = 0x04, .msr_values = {0x00}},
      R"(Dedicated Credits Received : Remote NCB)",
      R"(Dedicated Credits Received : Remote NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_DED_RECEIVED.REMOTE_NCS",
      EventDef::Encoding{.code = 0x16, .umask = 0x08, .msr_values = {0x00}},
      R"(Dedicated Credits Received : Remote NCS)",
      R"(Dedicated Credits Received : Remote NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_P2P_DED_RECEIVED.ALL",
      EventDef::Encoding{.code = 0x16, .umask = 0x10, .msr_values = {0x00}},
      R"(Dedicated Credits Received : All)",
      R"(Dedicated Credits Received : All)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_SHAR_RETURNED.AGENT_0",
      EventDef::Encoding{.code = 0x17, .umask = 0x01, .msr_values = {0x00}},
      R"(Local P2P Shared Credits Returned : Agent0)",
      R"(Local P2P Shared Credits Returned : Agent0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_SHAR_RETURNED.AGENT_1",
      EventDef::Encoding{.code = 0x17, .umask = 0x02, .msr_values = {0x00}},
      R"(Local P2P Shared Credits Returned : Agent1)",
      R"(Local P2P Shared Credits Returned : Agent1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_SHAR_RETURNED.AGENT_2",
      EventDef::Encoding{.code = 0x17, .umask = 0x04, .msr_values = {0x00}},
      R"(Local P2P Shared Credits Returned : Agent2)",
      R"(Local P2P Shared Credits Returned : Agent2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_SHAR_RETURNED.AGENT_0",
      EventDef::Encoding{.code = 0x18, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote P2P Shared Credits Returned : Agent0)",
      R"(Remote P2P Shared Credits Returned : Agent0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_SHAR_RETURNED.AGENT_1",
      EventDef::Encoding{.code = 0x18, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote P2P Shared Credits Returned : Agent1)",
      R"(Remote P2P Shared Credits Returned : Agent1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_SHAR_RETURNED.AGENT_2",
      EventDef::Encoding{.code = 0x18, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote P2P Shared Credits Returned : Agent2)",
      R"(Remote P2P Shared Credits Returned : Agent2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF0_NCB",
      EventDef::Encoding{.code = 0x19, .umask = 0x01, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF0 - NCB)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF0_NCS",
      EventDef::Encoding{.code = 0x19, .umask = 0x02, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF0 - NCS)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF1_NCB",
      EventDef::Encoding{.code = 0x19, .umask = 0x04, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF1 - NCB)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF1_NCS",
      EventDef::Encoding{.code = 0x19, .umask = 0x08, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF1 - NCS)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF2_NCB",
      EventDef::Encoding{.code = 0x19, .umask = 0x10, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF2 - NCB)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF3_NCB",
      EventDef::Encoding{.code = 0x19, .umask = 0x40, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF3 - NCB)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF3 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF2_NCS",
      EventDef::Encoding{.code = 0x19, .umask = 0x20, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF2 - NCS)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_0.MS2IOSF3_NCS",
      EventDef::Encoding{.code = 0x19, .umask = 0x80, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF3 - NCS)",
      R"(Local P2P Dedicated Credits Returned - 0 : M2IOSF3 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_1.MS2IOSF4_NCB",
      EventDef::Encoding{.code = 0x1a, .umask = 0x01, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF4 - NCB)",
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF4 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_1.MS2IOSF4_NCS",
      EventDef::Encoding{.code = 0x1a, .umask = 0x02, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF4 - NCS)",
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF4 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_1.MS2IOSF5_NCB",
      EventDef::Encoding{.code = 0x1a, .umask = 0x04, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF5 - NCB)",
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF5 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_P2P_DED_RETURNED_1.MS2IOSF5_NCS",
      EventDef::Encoding{.code = 0x1a, .umask = 0x08, .msr_values = {0x00}},
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF5 - NCS)",
      R"(Local P2P Dedicated Credits Returned - 1 : M2IOSF5 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_DED_RETURNED.UPI0_NCB",
      EventDef::Encoding{.code = 0x1b, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote P2P Dedicated Credits Returned : UPI0 - NCB)",
      R"(Remote P2P Dedicated Credits Returned : UPI0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_DED_RETURNED.UPI0_NCS",
      EventDef::Encoding{.code = 0x1b, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote P2P Dedicated Credits Returned : UPI0 - NCS)",
      R"(Remote P2P Dedicated Credits Returned : UPI0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_DED_RETURNED.UPI1_NCB",
      EventDef::Encoding{.code = 0x1b, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote P2P Dedicated Credits Returned : UPI1 - NCB)",
      R"(Remote P2P Dedicated Credits Returned : UPI1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_DED_RETURNED.UPI1_NCS",
      EventDef::Encoding{.code = 0x1b, .umask = 0x08, .msr_values = {0x00}},
      R"(Remote P2P Dedicated Credits Returned : UPI1 - NCS)",
      R"(Remote P2P Dedicated Credits Returned : UPI1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_DED_RETURNED.UPI2_NCB",
      EventDef::Encoding{.code = 0x1b, .umask = 0x10, .msr_values = {0x00}},
      R"(Remote P2P Dedicated Credits Returned : UPI2 - NCB)",
      R"(Remote P2P Dedicated Credits Returned : UPI2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_P2P_DED_RETURNED.UPI2_NCS",
      EventDef::Encoding{.code = 0x1b, .umask = 0x20, .msr_values = {0x00}},
      R"(Remote P2P Dedicated Credits Returned : UPI2 - NCS)",
      R"(Remote P2P Dedicated Credits Returned : UPI2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_TxC_CREDITS.PRQ",
      EventDef::Encoding{.code = 0x2d, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M2P_TxC_CREDITS.PRQ)",
      R"(UNC_M2P_TxC_CREDITS.PRQ)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_TxC_CREDITS.PMM",
      EventDef::Encoding{.code = 0x2d, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M2P_TxC_CREDITS.PMM)",
      R"(UNC_M2P_TxC_CREDITS.PMM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_USED.DRS_0",
      EventDef::Encoding{.code = 0x32, .umask = 0x01, .msr_values = {0x00}},
      R"(M2PCIe IIO Credits in Use : DRS to CMS Port 0)",
      R"(M2PCIe IIO Credits in Use : DRS to CMS Port 0 : Counts the number of cycles when one or more credits in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the DRS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_USED.DRS_1",
      EventDef::Encoding{.code = 0x32, .umask = 0x02, .msr_values = {0x00}},
      R"(M2PCIe IIO Credits in Use : DRS to CMS Port 1)",
      R"(M2PCIe IIO Credits in Use : DRS to CMS Port 1 : Counts the number of cycles when one or more credits in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the DRS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_USED.NCB_0",
      EventDef::Encoding{.code = 0x32, .umask = 0x04, .msr_values = {0x00}},
      R"(M2PCIe IIO Credits in Use : NCB to CMS Port 0)",
      R"(M2PCIe IIO Credits in Use : NCB to CMS Port 0 : Counts the number of cycles when one or more credits in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the NCB message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_USED.NCB_1",
      EventDef::Encoding{.code = 0x32, .umask = 0x08, .msr_values = {0x00}},
      R"(M2PCIe IIO Credits in Use : NCB to CMS Port 1)",
      R"(M2PCIe IIO Credits in Use : NCB to CMS Port 1 : Counts the number of cycles when one or more credits in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the NCB message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_USED.NCS_0",
      EventDef::Encoding{.code = 0x32, .umask = 0x10, .msr_values = {0x00}},
      R"(M2PCIe IIO Credits in Use : NCS to CMS Port 0)",
      R"(M2PCIe IIO Credits in Use : NCS to CMS Port 0 : Counts the number of cycles when one or more credits in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the NCS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_USED.NCS_1",
      EventDef::Encoding{.code = 0x32, .umask = 0x20, .msr_values = {0x00}},
      R"(M2PCIe IIO Credits in Use : NCS to CMS Port 1)",
      R"(M2PCIe IIO Credits in Use : NCS to CMS Port 1 : Counts the number of cycles when one or more credits in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credit for transfer through CMS Port 0s to the IIO for the NCS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_ACQUIRED.DRS_0",
      EventDef::Encoding{.code = 0x33, .umask = 0x01, .msr_values = {0x00}},
      R"(M2PCIe IIO Credit Acquired : DRS)",
      R"(M2PCIe IIO Credit Acquired : DRS : Counts the number of credits that are acquired in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the DRS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_ACQUIRED.DRS_1",
      EventDef::Encoding{.code = 0x33, .umask = 0x02, .msr_values = {0x00}},
      R"(M2PCIe IIO Credit Acquired : DRS)",
      R"(M2PCIe IIO Credit Acquired : DRS : Counts the number of credits that are acquired in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the DRS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_ACQUIRED.NCB_0",
      EventDef::Encoding{.code = 0x33, .umask = 0x04, .msr_values = {0x00}},
      R"(M2PCIe IIO Credit Acquired : NCB)",
      R"(M2PCIe IIO Credit Acquired : NCB : Counts the number of credits that are acquired in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the NCB message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_ACQUIRED.NCB_1",
      EventDef::Encoding{.code = 0x33, .umask = 0x08, .msr_values = {0x00}},
      R"(M2PCIe IIO Credit Acquired : NCB)",
      R"(M2PCIe IIO Credit Acquired : NCB : Counts the number of credits that are acquired in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the NCB message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_ACQUIRED.NCS_0",
      EventDef::Encoding{.code = 0x33, .umask = 0x10, .msr_values = {0x00}},
      R"(M2PCIe IIO Credit Acquired : NCS)",
      R"(M2PCIe IIO Credit Acquired : NCS : Counts the number of credits that are acquired in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits for transfer through CMS Port 0 to the IIO for the NCS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_ACQUIRED.NCS_1",
      EventDef::Encoding{.code = 0x33, .umask = 0x20, .msr_values = {0x00}},
      R"(M2PCIe IIO Credit Acquired : NCS)",
      R"(M2PCIe IIO Credit Acquired : NCS : Counts the number of credits that are acquired in the M2PCIe agent for sending transactions into the IIO on either NCB or NCS are in use.  Transactions from the BL ring going into the IIO Agent must first acquire a credit.  These credits are for either the NCB or NCS message classes.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credit for transfer through CMS Port 0s to the IIO for the NCS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_REJECT.DRS",
      EventDef::Encoding{.code = 0x34, .umask = 0x08, .msr_values = {0x00}},
      R"(M2PCIe IIO Failed to Acquire a Credit : DRS)",
      R"(M2PCIe IIO Failed to Acquire a Credit : DRS : Counts the number of times that a request pending in the BL Ingress attempted to acquire either a NCB or NCS credit to transmit into the IIO, but was rejected because no credits were available.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits to the IIO for the DRS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_REJECT.NCB",
      EventDef::Encoding{.code = 0x34, .umask = 0x10, .msr_values = {0x00}},
      R"(M2PCIe IIO Failed to Acquire a Credit : NCB)",
      R"(M2PCIe IIO Failed to Acquire a Credit : NCB : Counts the number of times that a request pending in the BL Ingress attempted to acquire either a NCB or NCS credit to transmit into the IIO, but was rejected because no credits were available.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits to the IIO for the NCB message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_IIO_CREDITS_REJECT.NCS",
      EventDef::Encoding{.code = 0x34, .umask = 0x20, .msr_values = {0x00}},
      R"(M2PCIe IIO Failed to Acquire a Credit : NCS)",
      R"(M2PCIe IIO Failed to Acquire a Credit : NCS : Counts the number of times that a request pending in the BL Ingress attempted to acquire either a NCB or NCS credit to transmit into the IIO, but was rejected because no credits were available.  NCB, or non-coherent bypass messages are used to transmit data without coherency (and are common).  NCS is used for reads to PCIe (and should be used sparingly). : Credits to the IIO for the NCS message class.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF0_NCB",
      EventDef::Encoding{.code = 0x40, .umask = 0x01, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF0 - NCB)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF0_NCS",
      EventDef::Encoding{.code = 0x40, .umask = 0x02, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF0 - NCS)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF1_NCB",
      EventDef::Encoding{.code = 0x40, .umask = 0x04, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF1 - NCB)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF1_NCS",
      EventDef::Encoding{.code = 0x40, .umask = 0x08, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF1 - NCS)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF2_NCB",
      EventDef::Encoding{.code = 0x40, .umask = 0x10, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF2 - NCB)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF2_NCS",
      EventDef::Encoding{.code = 0x40, .umask = 0x20, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF2 - NCS)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF3_NCB",
      EventDef::Encoding{.code = 0x40, .umask = 0x40, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF3 - NCB)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF3 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_0.M2IOSF3_NCS",
      EventDef::Encoding{.code = 0x40, .umask = 0x80, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF3 - NCS)",
      R"(Local Shared P2P Credit Taken - 0 : M2IOSF3 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_1.M2IOSF4_NCB",
      EventDef::Encoding{.code = 0x41, .umask = 0x01, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF4 - NCB)",
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF4 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_1.M2IOSF4_NCS",
      EventDef::Encoding{.code = 0x41, .umask = 0x02, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF4 - NCS)",
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF4 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_1.M2IOSF5_NCB",
      EventDef::Encoding{.code = 0x41, .umask = 0x04, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF5 - NCB)",
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF5 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_TAKEN_1.M2IOSF5_NCS",
      EventDef::Encoding{.code = 0x41, .umask = 0x08, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF5 - NCS)",
      R"(Local Shared P2P Credit Taken - 1 : M2IOSF5 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_0.UPI0_DRS",
      EventDef::Encoding{.code = 0x42, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 0 : UPI0 - DRS)",
      R"(Remote Shared P2P Credit Taken - 0 : UPI0 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_0.UPI0_NCB",
      EventDef::Encoding{.code = 0x42, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 0 : UPI0 - NCB)",
      R"(Remote Shared P2P Credit Taken - 0 : UPI0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_0.UPI0_NCS",
      EventDef::Encoding{.code = 0x42, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 0 : UPI0 - NCS)",
      R"(Remote Shared P2P Credit Taken - 0 : UPI0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_0.UPI1_DRS",
      EventDef::Encoding{.code = 0x42, .umask = 0x08, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 0 : UPI1 - DRS)",
      R"(Remote Shared P2P Credit Taken - 0 : UPI1 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_0.UPI1_NCB",
      EventDef::Encoding{.code = 0x42, .umask = 0x10, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 0 : UPI1 - NCB)",
      R"(Remote Shared P2P Credit Taken - 0 : UPI1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_0.UPI1_NCS",
      EventDef::Encoding{.code = 0x42, .umask = 0x20, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 0 : UPI1 - NCS)",
      R"(Remote Shared P2P Credit Taken - 0 : UPI1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_1.UPI2_DRS",
      EventDef::Encoding{.code = 0x43, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 1 : UPI2 - DRS)",
      R"(Remote Shared P2P Credit Taken - 1 : UPI2 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_1.UPI2_NCB",
      EventDef::Encoding{.code = 0x43, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 1 : UPI2 - NCB)",
      R"(Remote Shared P2P Credit Taken - 1 : UPI2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_TAKEN_1.UPI2_NCS",
      EventDef::Encoding{.code = 0x43, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Taken - 1 : UPI2 - NCS)",
      R"(Remote Shared P2P Credit Taken - 1 : UPI2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_RETURNED.AGENT_0",
      EventDef::Encoding{.code = 0x44, .umask = 0x01, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Returned to credit ring : Agent0)",
      R"(Local Shared P2P Credit Returned to credit ring : Agent0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_RETURNED.AGENT_1",
      EventDef::Encoding{.code = 0x44, .umask = 0x02, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Returned to credit ring : Agent1)",
      R"(Local Shared P2P Credit Returned to credit ring : Agent1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_RETURNED.AGENT_2",
      EventDef::Encoding{.code = 0x44, .umask = 0x04, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Returned to credit ring : Agent2)",
      R"(Local Shared P2P Credit Returned to credit ring : Agent2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_RETURNED.AGENT_3",
      EventDef::Encoding{.code = 0x44, .umask = 0x08, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Returned to credit ring : Agent3)",
      R"(Local Shared P2P Credit Returned to credit ring : Agent3)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_RETURNED.AGENT_4",
      EventDef::Encoding{.code = 0x44, .umask = 0x10, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Returned to credit ring : Agent4)",
      R"(Local Shared P2P Credit Returned to credit ring : Agent4)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_RETURNED.AGENT_5",
      EventDef::Encoding{.code = 0x44, .umask = 0x20, .msr_values = {0x00}},
      R"(Local Shared P2P Credit Returned to credit ring : Agent5)",
      R"(Local Shared P2P Credit Returned to credit ring : Agent5)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_RETURNED.AGENT_0",
      EventDef::Encoding{.code = 0x45, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Returned to credit ring : Agent0)",
      R"(Remote Shared P2P Credit Returned to credit ring : Agent0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_RETURNED.AGENT_1",
      EventDef::Encoding{.code = 0x45, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Returned to credit ring : Agent1)",
      R"(Remote Shared P2P Credit Returned to credit ring : Agent1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_RETURNED.AGENT_2",
      EventDef::Encoding{.code = 0x45, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote Shared P2P Credit Returned to credit ring : Agent2)",
      R"(Remote Shared P2P Credit Returned to credit ring : Agent2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF0_NCB",
      EventDef::Encoding{.code = 0x46, .umask = 0x01, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF0 - NCB)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF0_NCS",
      EventDef::Encoding{.code = 0x46, .umask = 0x02, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF0 - NCS)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF1_NCB",
      EventDef::Encoding{.code = 0x46, .umask = 0x04, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF1 - NCB)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF1_NCS",
      EventDef::Encoding{.code = 0x46, .umask = 0x08, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF1 - NCS)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF2_NCB",
      EventDef::Encoding{.code = 0x46, .umask = 0x10, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF2 - NCB)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF2_NCS",
      EventDef::Encoding{.code = 0x46, .umask = 0x20, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF2 - NCS)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF3_NCB",
      EventDef::Encoding{.code = 0x46, .umask = 0x40, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF3 - NCB)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF3 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_0.M2IOSF3_NCS",
      EventDef::Encoding{.code = 0x46, .umask = 0x80, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF3 - NCS)",
      R"(Local Dedicated P2P Credit Taken - 0 : M2IOSF3 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_1.M2IOSF4_NCB",
      EventDef::Encoding{.code = 0x47, .umask = 0x01, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF4 - NCB)",
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF4 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_1.M2IOSF4_NCS",
      EventDef::Encoding{.code = 0x47, .umask = 0x02, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF4 - NCS)",
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF4 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_1.M2IOSF5_NCB",
      EventDef::Encoding{.code = 0x47, .umask = 0x04, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF5 - NCB)",
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF5 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_DED_P2P_CRD_TAKEN_1.M2IOSF5_NCS",
      EventDef::Encoding{.code = 0x47, .umask = 0x08, .msr_values = {0x00}},
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF5 - NCS)",
      R"(Local Dedicated P2P Credit Taken - 1 : M2IOSF5 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_0.UPI0_DRS",
      EventDef::Encoding{.code = 0x48, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI0 - DRS)",
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI0 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_0.UPI0_NCB",
      EventDef::Encoding{.code = 0x48, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI0 - NCB)",
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_0.UPI0_NCS",
      EventDef::Encoding{.code = 0x48, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI0 - NCS)",
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_0.UPI1_DRS",
      EventDef::Encoding{.code = 0x48, .umask = 0x08, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI1 - DRS)",
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI1 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_0.UPI1_NCB",
      EventDef::Encoding{.code = 0x48, .umask = 0x10, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI1 - NCB)",
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_0.UPI1_NCS",
      EventDef::Encoding{.code = 0x48, .umask = 0x20, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI1 - NCS)",
      R"(Remote Dedicated P2P Credit Taken - 0 : UPI1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_1.UPI2_DRS",
      EventDef::Encoding{.code = 0x49, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 1 : UPI2 - DRS)",
      R"(Remote Dedicated P2P Credit Taken - 1 : UPI2 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_1.UPI2_NCB",
      EventDef::Encoding{.code = 0x49, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 1 : UPI2 - NCB)",
      R"(Remote Dedicated P2P Credit Taken - 1 : UPI2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_DED_P2P_CRD_TAKEN_1.UPI2_NCS",
      EventDef::Encoding{.code = 0x49, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote Dedicated P2P Credit Taken - 1 : UPI2 - NCS)",
      R"(Remote Dedicated P2P Credit Taken - 1 : UPI2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF0_NCB",
      EventDef::Encoding{.code = 0x4a, .umask = 0x01, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF0 - NCB)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF0_NCS",
      EventDef::Encoding{.code = 0x4a, .umask = 0x02, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF0 - NCS)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF1_NCB",
      EventDef::Encoding{.code = 0x4a, .umask = 0x04, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF1 - NCB)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF1_NCS",
      EventDef::Encoding{.code = 0x4a, .umask = 0x08, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF1 - NCS)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF2_NCB",
      EventDef::Encoding{.code = 0x4a, .umask = 0x10, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF2 - NCB)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF2_NCS",
      EventDef::Encoding{.code = 0x4a, .umask = 0x20, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF2 - NCS)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF3_NCB",
      EventDef::Encoding{.code = 0x4a, .umask = 0x40, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF3 - NCB)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF3 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_0.M2IOSF3_NCS",
      EventDef::Encoding{.code = 0x4a, .umask = 0x80, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF3 - NCS)",
      R"(Waiting on Local Shared P2P Credit - 0 : M2IOSF3 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_1.M2IOSF4_NCB",
      EventDef::Encoding{.code = 0x4b, .umask = 0x01, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF4 - NCB)",
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF4 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_1.M2IOSF4_NCS",
      EventDef::Encoding{.code = 0x4b, .umask = 0x02, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF4 - NCS)",
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF4 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_1.M2IOSF5_NCB",
      EventDef::Encoding{.code = 0x4b, .umask = 0x04, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF5 - NCB)",
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF5 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_LOCAL_SHAR_P2P_CRD_WAIT_1.M2IOSF5_NCS",
      EventDef::Encoding{.code = 0x4b, .umask = 0x08, .msr_values = {0x00}},
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF5 - NCS)",
      R"(Waiting on Local Shared P2P Credit - 1 : M2IOSF5 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_0.UPI0_DRS",
      EventDef::Encoding{.code = 0x4c, .umask = 0x01, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI0 - DRS)",
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI0 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_0.UPI0_NCB",
      EventDef::Encoding{.code = 0x4c, .umask = 0x02, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI0 - NCB)",
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI0 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_0.UPI0_NCS",
      EventDef::Encoding{.code = 0x4c, .umask = 0x04, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI0 - NCS)",
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI0 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_0.UPI1_DRS",
      EventDef::Encoding{.code = 0x4c, .umask = 0x08, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI1 - DRS)",
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI1 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_0.UPI1_NCB",
      EventDef::Encoding{.code = 0x4c, .umask = 0x10, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI1 - NCB)",
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI1 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_0.UPI1_NCS",
      EventDef::Encoding{.code = 0x4c, .umask = 0x20, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI1 - NCS)",
      R"(Waiting on Remote Shared P2P Credit - 0 : UPI1 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_1.UPI2_DRS",
      EventDef::Encoding{.code = 0x4d, .umask = 0x01, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 1 : UPI2 - DRS)",
      R"(Waiting on Remote Shared P2P Credit - 1 : UPI2 - DRS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_1.UPI2_NCB",
      EventDef::Encoding{.code = 0x4d, .umask = 0x02, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 1 : UPI2 - NCB)",
      R"(Waiting on Remote Shared P2P Credit - 1 : UPI2 - NCB)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_REMOTE_SHAR_P2P_CRD_WAIT_1.UPI2_NCS",
      EventDef::Encoding{.code = 0x4d, .umask = 0x04, .msr_values = {0x00}},
      R"(Waiting on Remote Shared P2P Credit - 1 : UPI2 - NCS)",
      R"(Waiting on Remote Shared P2P Credit - 1 : UPI2 - NCS)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_EGRESS_ORDERING.IV_SNOOPGO_UP",
      EventDef::Encoding{.code = 0xba, .umask = 0x01, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Up)",
      R"(Egress Blocking due to Ordering requirements : Up : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_EGRESS_ORDERING.IV_SNOOPGO_DN",
      EventDef::Encoding{.code = 0xba, .umask = 0x04, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Down)",
      R"(Egress Blocking due to Ordering requirements : Down : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_EGRESS_ORDERING.IV_SNOOPGO_UP",
      EventDef::Encoding{.code = 0xba, .umask = 0x01, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Up)",
      R"(Egress Blocking due to Ordering requirements : Up : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_EGRESS_ORDERING.IV_SNOOPGO_DN",
      EventDef::Encoding{.code = 0xba, .umask = 0x04, .msr_values = {0x00}},
      R"(Egress Blocking due to Ordering requirements : Down)",
      R"(Egress Blocking due to Ordering requirements : Down : Counts number of cycles IV was blocked in the TGR Egress due to SNP/GO Ordering requirements)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_CHA_AD_CREDITS_EMPTY.VNA",
      EventDef::Encoding{.code = 0x22, .umask = 0x01, .msr_values = {0x00}},
      R"(CBox AD Credits Empty : VNA Messages)",
      R"(CBox AD Credits Empty : VNA Messages : No credits available to send to Cbox on the AD Ring (covers higher CBoxes))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_CHA_AD_CREDITS_EMPTY.WB",
      EventDef::Encoding{.code = 0x22, .umask = 0x02, .msr_values = {0x00}},
      R"(CBox AD Credits Empty : Writebacks)",
      R"(CBox AD Credits Empty : Writebacks : No credits available to send to Cbox on the AD Ring (covers higher CBoxes))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_CHA_AD_CREDITS_EMPTY.REQ",
      EventDef::Encoding{.code = 0x22, .umask = 0x04, .msr_values = {0x00}},
      R"(CBox AD Credits Empty : Requests)",
      R"(CBox AD Credits Empty : Requests : No credits available to send to Cbox on the AD Ring (covers higher CBoxes))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_CHA_AD_CREDITS_EMPTY.SNP",
      EventDef::Encoding{.code = 0x22, .umask = 0x08, .msr_values = {0x00}},
      R"(CBox AD Credits Empty : Snoops)",
      R"(CBox AD Credits Empty : Snoops : No credits available to send to Cbox on the AD Ring (covers higher CBoxes))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.IIO2_NCB",
      EventDef::Encoding{.code = 0x23, .umask = 0x02, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : IIO2)",
      R"(M2 BL Credits Empty : IIO2 : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.IIO3_NCB",
      EventDef::Encoding{.code = 0x23, .umask = 0x04, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : IIO3)",
      R"(M2 BL Credits Empty : IIO3 : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.IIO4_NCB",
      EventDef::Encoding{.code = 0x23, .umask = 0x08, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : IIO4)",
      R"(M2 BL Credits Empty : IIO4 : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.IIO5_NCB",
      EventDef::Encoding{.code = 0x23, .umask = 0x10, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : IIO5)",
      R"(M2 BL Credits Empty : IIO5 : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.NCS",
      EventDef::Encoding{.code = 0x23, .umask = 0x40, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : All IIO targets for NCS are in single mask. ORs them together)",
      R"(M2 BL Credits Empty : All IIO targets for NCS are in single mask. ORs them together : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.NCS_SEL",
      EventDef::Encoding{.code = 0x23, .umask = 0x80, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : Selected M2p BL NCS credits)",
      R"(M2 BL Credits Empty : Selected M2p BL NCS credits : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_MULTI_SLOT_RCVD.AD_SLOT0",
      EventDef::Encoding{.code = 0x3e, .umask = 0x01, .msr_values = {0x00}},
      R"(Multi Slot Flit Received : AD - Slot 0)",
      R"(Multi Slot Flit Received : AD - Slot 0 : Multi slot flit received - S0, S1 and/or S2 populated (can use AK S0/S1 masks for AK allocations))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_MULTI_SLOT_RCVD.AD_SLOT1",
      EventDef::Encoding{.code = 0x3e, .umask = 0x02, .msr_values = {0x00}},
      R"(Multi Slot Flit Received : AD - Slot 1)",
      R"(Multi Slot Flit Received : AD - Slot 1 : Multi slot flit received - S0, S1 and/or S2 populated (can use AK S0/S1 masks for AK allocations))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_MULTI_SLOT_RCVD.AD_SLOT2",
      EventDef::Encoding{.code = 0x3e, .umask = 0x04, .msr_values = {0x00}},
      R"(Multi Slot Flit Received : AD - Slot 2)",
      R"(Multi Slot Flit Received : AD - Slot 2 : Multi slot flit received - S0, S1 and/or S2 populated (can use AK S0/S1 masks for AK allocations))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_MULTI_SLOT_RCVD.BL_SLOT0",
      EventDef::Encoding{.code = 0x3e, .umask = 0x08, .msr_values = {0x00}},
      R"(Multi Slot Flit Received : BL - Slot 0)",
      R"(Multi Slot Flit Received : BL - Slot 0 : Multi slot flit received - S0, S1 and/or S2 populated (can use AK S0/S1 masks for AK allocations))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_MULTI_SLOT_RCVD.AK_SLOT0",
      EventDef::Encoding{.code = 0x3e, .umask = 0x10, .msr_values = {0x00}},
      R"(Multi Slot Flit Received : AK - Slot 0)",
      R"(Multi Slot Flit Received : AK - Slot 0 : Multi slot flit received - S0, S1 and/or S2 populated (can use AK S0/S1 masks for AK allocations))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_MULTI_SLOT_RCVD.AK_SLOT2",
      EventDef::Encoding{.code = 0x3e, .umask = 0x20, .msr_values = {0x00}},
      R"(Multi Slot Flit Received : AK - Slot 2)",
      R"(Multi Slot Flit Received : AK - Slot 2 : Multi slot flit received - S0, S1 and/or S2 populated (can use AK S0/S1 masks for AK allocations))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.AD_REQ",
      EventDef::Encoding{.code = 0x4b, .umask = 0x01, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : REQ on AD)",
      R"(Lost Arb for VN0 : REQ on AD : VN0 message requested but lost arbitration : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.AD_SNP",
      EventDef::Encoding{.code = 0x4b, .umask = 0x02, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : SNP on AD)",
      R"(Lost Arb for VN0 : SNP on AD : VN0 message requested but lost arbitration : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.AD_RSP",
      EventDef::Encoding{.code = 0x4b, .umask = 0x04, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : RSP on AD)",
      R"(Lost Arb for VN0 : RSP on AD : VN0 message requested but lost arbitration : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.BL_RSP",
      EventDef::Encoding{.code = 0x4b, .umask = 0x08, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : RSP on BL)",
      R"(Lost Arb for VN0 : RSP on BL : VN0 message requested but lost arbitration : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.BL_WB",
      EventDef::Encoding{.code = 0x4b, .umask = 0x10, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : WB on BL)",
      R"(Lost Arb for VN0 : WB on BL : VN0 message requested but lost arbitration : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.BL_NCB",
      EventDef::Encoding{.code = 0x4b, .umask = 0x20, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : NCB on BL)",
      R"(Lost Arb for VN0 : NCB on BL : VN0 message requested but lost arbitration : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN0.BL_NCS",
      EventDef::Encoding{.code = 0x4b, .umask = 0x40, .msr_values = {0x00}},
      R"(Lost Arb for VN0 : NCS on BL)",
      R"(Lost Arb for VN0 : NCS on BL : VN0 message requested but lost arbitration : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.AD_REQ",
      EventDef::Encoding{.code = 0x4c, .umask = 0x01, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : REQ on AD)",
      R"(Lost Arb for VN1 : REQ on AD : VN1 message requested but lost arbitration : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.AD_SNP",
      EventDef::Encoding{.code = 0x4c, .umask = 0x02, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : SNP on AD)",
      R"(Lost Arb for VN1 : SNP on AD : VN1 message requested but lost arbitration : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.AD_RSP",
      EventDef::Encoding{.code = 0x4c, .umask = 0x04, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : RSP on AD)",
      R"(Lost Arb for VN1 : RSP on AD : VN1 message requested but lost arbitration : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.BL_RSP",
      EventDef::Encoding{.code = 0x4c, .umask = 0x08, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : RSP on BL)",
      R"(Lost Arb for VN1 : RSP on BL : VN1 message requested but lost arbitration : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.BL_WB",
      EventDef::Encoding{.code = 0x4c, .umask = 0x10, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : WB on BL)",
      R"(Lost Arb for VN1 : WB on BL : VN1 message requested but lost arbitration : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.BL_NCB",
      EventDef::Encoding{.code = 0x4c, .umask = 0x20, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : NCB on BL)",
      R"(Lost Arb for VN1 : NCB on BL : VN1 message requested but lost arbitration : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_LOST_VN1.BL_NCS",
      EventDef::Encoding{.code = 0x4c, .umask = 0x40, .msr_values = {0x00}},
      R"(Lost Arb for VN1 : NCS on BL)",
      R"(Lost Arb for VN1 : NCS on BL : VN1 message requested but lost arbitration : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.NO_PROG_AD_VN0",
      EventDef::Encoding{.code = 0x4d, .umask = 0x01, .msr_values = {0x00}},
      R"(Arb Miscellaneous : No Progress on Pending AD VN0)",
      R"(Arb Miscellaneous : No Progress on Pending AD VN0 : Arbitration stage made no progress on pending ad vn0 messages because slotting stage cannot accept new message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.NO_PROG_AD_VN1",
      EventDef::Encoding{.code = 0x4d, .umask = 0x02, .msr_values = {0x00}},
      R"(Arb Miscellaneous : No Progress on Pending AD VN1)",
      R"(Arb Miscellaneous : No Progress on Pending AD VN1 : Arbitration stage made no progress on pending ad vn1 messages because slotting stage cannot accept new message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.NO_PROG_BL_VN0",
      EventDef::Encoding{.code = 0x4d, .umask = 0x04, .msr_values = {0x00}},
      R"(Arb Miscellaneous : No Progress on Pending BL VN0)",
      R"(Arb Miscellaneous : No Progress on Pending BL VN0 : Arbitration stage made no progress on pending bl vn0 messages because slotting stage cannot accept new message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.NO_PROG_BL_VN1",
      EventDef::Encoding{.code = 0x4d, .umask = 0x08, .msr_values = {0x00}},
      R"(Arb Miscellaneous : No Progress on Pending BL VN1)",
      R"(Arb Miscellaneous : No Progress on Pending BL VN1 : Arbitration stage made no progress on pending bl vn1 messages because slotting stage cannot accept new message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.ADBL_PARALLEL_WIN_VN0",
      EventDef::Encoding{.code = 0x4d, .umask = 0x10, .msr_values = {0x00}},
      R"(Arb Miscellaneous : AD, BL Parallel Win VN0)",
      R"(Arb Miscellaneous : AD, BL Parallel Win VN0 : AD and BL messages won arbitration concurrently / in parallel)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.ADBL_PARALLEL_WIN_VN1",
      EventDef::Encoding{.code = 0x4d, .umask = 0x20, .msr_values = {0x00}},
      R"(Arb Miscellaneous : AD, BL Parallel Win VN1)",
      R"(Arb Miscellaneous : AD, BL Parallel Win VN1 : AD and BL messages won arbitration concurrently / in parallel)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.VN01_PARALLEL_WIN",
      EventDef::Encoding{.code = 0x4d, .umask = 0x40, .msr_values = {0x00}},
      R"(Arb Miscellaneous : VN0, VN1 Parallel Win)",
      R"(Arb Miscellaneous : VN0, VN1 Parallel Win : VN0 and VN1 arbitration sub-pipelines had parallel winners (at least one AD or BL on each side))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_MISC.ALL_PARALLEL_WIN",
      EventDef::Encoding{.code = 0x4d, .umask = 0x80, .msr_values = {0x00}},
      R"(Arb Miscellaneous : Max Parallel Win)",
      R"(Arb Miscellaneous : Max Parallel Win : VN0 and VN1 arbitration sub-pipelines both produced AD and BL winners (maximum possible parallel winners))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.AD_REQ",
      EventDef::Encoding{.code = 0x47, .umask = 0x01, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : REQ on AD)",
      R"(No Credits to Arb for VN0 : REQ on AD : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.AD_SNP",
      EventDef::Encoding{.code = 0x47, .umask = 0x02, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : SNP on AD)",
      R"(No Credits to Arb for VN0 : SNP on AD : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.AD_RSP",
      EventDef::Encoding{.code = 0x47, .umask = 0x04, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : RSP on AD)",
      R"(No Credits to Arb for VN0 : RSP on AD : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.BL_RSP",
      EventDef::Encoding{.code = 0x47, .umask = 0x08, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : RSP on BL)",
      R"(No Credits to Arb for VN0 : RSP on BL : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.BL_WB",
      EventDef::Encoding{.code = 0x47, .umask = 0x10, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : WB on BL)",
      R"(No Credits to Arb for VN0 : WB on BL : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.BL_NCB",
      EventDef::Encoding{.code = 0x47, .umask = 0x20, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : NCB on BL)",
      R"(No Credits to Arb for VN0 : NCB on BL : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN0.BL_NCS",
      EventDef::Encoding{.code = 0x47, .umask = 0x40, .msr_values = {0x00}},
      R"(No Credits to Arb for VN0 : NCS on BL)",
      R"(No Credits to Arb for VN0 : NCS on BL : VN0 message is blocked from requesting arbitration due to lack of remote UPI credits : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.AD_REQ",
      EventDef::Encoding{.code = 0x48, .umask = 0x01, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : REQ on AD)",
      R"(No Credits to Arb for VN1 : REQ on AD : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.AD_SNP",
      EventDef::Encoding{.code = 0x48, .umask = 0x02, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : SNP on AD)",
      R"(No Credits to Arb for VN1 : SNP on AD : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.AD_RSP",
      EventDef::Encoding{.code = 0x48, .umask = 0x04, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : RSP on AD)",
      R"(No Credits to Arb for VN1 : RSP on AD : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.BL_RSP",
      EventDef::Encoding{.code = 0x48, .umask = 0x08, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : RSP on BL)",
      R"(No Credits to Arb for VN1 : RSP on BL : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.BL_WB",
      EventDef::Encoding{.code = 0x48, .umask = 0x10, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : WB on BL)",
      R"(No Credits to Arb for VN1 : WB on BL : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.BL_NCB",
      EventDef::Encoding{.code = 0x48, .umask = 0x20, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : NCB on BL)",
      R"(No Credits to Arb for VN1 : NCB on BL : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOCRD_VN1.BL_NCS",
      EventDef::Encoding{.code = 0x48, .umask = 0x40, .msr_values = {0x00}},
      R"(No Credits to Arb for VN1 : NCS on BL)",
      R"(No Credits to Arb for VN1 : NCS on BL : VN1 message is blocked from requesting arbitration due to lack of remote UPI credits : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.AD_REQ",
      EventDef::Encoding{.code = 0x49, .umask = 0x01, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : REQ on AD)",
      R"(Can't Arb for VN0 : REQ on AD : VN0 message was not able to request arbitration while some other message won arbitration : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.AD_SNP",
      EventDef::Encoding{.code = 0x49, .umask = 0x02, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : SNP on AD)",
      R"(Can't Arb for VN0 : SNP on AD : VN0 message was not able to request arbitration while some other message won arbitration : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.AD_RSP",
      EventDef::Encoding{.code = 0x49, .umask = 0x04, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : RSP on AD)",
      R"(Can't Arb for VN0 : RSP on AD : VN0 message was not able to request arbitration while some other message won arbitration : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.BL_RSP",
      EventDef::Encoding{.code = 0x49, .umask = 0x08, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : RSP on BL)",
      R"(Can't Arb for VN0 : RSP on BL : VN0 message was not able to request arbitration while some other message won arbitration : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.BL_WB",
      EventDef::Encoding{.code = 0x49, .umask = 0x10, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : WB on BL)",
      R"(Can't Arb for VN0 : WB on BL : VN0 message was not able to request arbitration while some other message won arbitration : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.BL_NCB",
      EventDef::Encoding{.code = 0x49, .umask = 0x20, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : NCB on BL)",
      R"(Can't Arb for VN0 : NCB on BL : VN0 message was not able to request arbitration while some other message won arbitration : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN0.BL_NCS",
      EventDef::Encoding{.code = 0x49, .umask = 0x40, .msr_values = {0x00}},
      R"(Can't Arb for VN0 : NCS on BL)",
      R"(Can't Arb for VN0 : NCS on BL : VN0 message was not able to request arbitration while some other message won arbitration : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.AD_REQ",
      EventDef::Encoding{.code = 0x4a, .umask = 0x01, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : REQ on AD)",
      R"(Can't Arb for VN1 : REQ on AD : VN1 message was not able to request arbitration while some other message won arbitration : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.AD_SNP",
      EventDef::Encoding{.code = 0x4a, .umask = 0x02, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : SNP on AD)",
      R"(Can't Arb for VN1 : SNP on AD : VN1 message was not able to request arbitration while some other message won arbitration : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.AD_RSP",
      EventDef::Encoding{.code = 0x4a, .umask = 0x04, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : RSP on AD)",
      R"(Can't Arb for VN1 : RSP on AD : VN1 message was not able to request arbitration while some other message won arbitration : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.BL_RSP",
      EventDef::Encoding{.code = 0x4a, .umask = 0x08, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : RSP on BL)",
      R"(Can't Arb for VN1 : RSP on BL : VN1 message was not able to request arbitration while some other message won arbitration : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.BL_WB",
      EventDef::Encoding{.code = 0x4a, .umask = 0x10, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : WB on BL)",
      R"(Can't Arb for VN1 : WB on BL : VN1 message was not able to request arbitration while some other message won arbitration : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.BL_NCB",
      EventDef::Encoding{.code = 0x4a, .umask = 0x20, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : NCB on BL)",
      R"(Can't Arb for VN1 : NCB on BL : VN1 message was not able to request arbitration while some other message won arbitration : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_ARB_NOREQ_VN1.BL_NCS",
      EventDef::Encoding{.code = 0x4a, .umask = 0x40, .msr_values = {0x00}},
      R"(Can't Arb for VN1 : NCS on BL)",
      R"(Can't Arb for VN1 : NCS on BL : VN1 message was not able to request arbitration while some other message won arbitration : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_BYPASSED.AD_S0_IDLE",
      EventDef::Encoding{.code = 0x40, .umask = 0x01, .msr_values = {0x00}},
      R"(Ingress Queue Bypasses : AD to Slot 0 on Idle)",
      R"(Ingress Queue Bypasses : AD to Slot 0 on Idle : Number of times message is bypassed around the Ingress Queue : AD is taking bypass to slot 0 of independent flit while pipeline is idle)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_BYPASSED.AD_S0_BL_ARB",
      EventDef::Encoding{.code = 0x40, .umask = 0x02, .msr_values = {0x00}},
      R"(Ingress Queue Bypasses : AD to Slot 0 on BL Arb)",
      R"(Ingress Queue Bypasses : AD to Slot 0 on BL Arb : Number of times message is bypassed around the Ingress Queue : AD is taking bypass to slot 0 of independent flit while bl message is in arbitration)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_BYPASSED.AD_S1_BL_SLOT",
      EventDef::Encoding{.code = 0x40, .umask = 0x04, .msr_values = {0x00}},
      R"(Ingress Queue Bypasses : AD + BL to Slot 1)",
      R"(Ingress Queue Bypasses : AD + BL to Slot 1 : Number of times message is bypassed around the Ingress Queue : AD is taking bypass to flit slot 1 while merging with bl message in same flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_BYPASSED.AD_S2_BL_SLOT",
      EventDef::Encoding{.code = 0x40, .umask = 0x08, .msr_values = {0x00}},
      R"(Ingress Queue Bypasses : AD + BL to Slot 2)",
      R"(Ingress Queue Bypasses : AD + BL to Slot 2 : Number of times message is bypassed around the Ingress Queue : AD is taking bypass to flit slot 2 while merging with bl message in same flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_MISC.ANY_BGF_FIFO",
      EventDef::Encoding{.code = 0x5f, .umask = 0x01, .msr_values = {0x00}},
      R"(Miscellaneous Credit Events : Any In BGF FIFO)",
      R"(Miscellaneous Credit Events : Any In BGF FIFO : Indication that at least one packet (flit) is in the bgf (fifo only))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_MISC.ANY_BGF_PATH",
      EventDef::Encoding{.code = 0x5f, .umask = 0x02, .msr_values = {0x00}},
      R"(Miscellaneous Credit Events : Any in BGF Path)",
      R"(Miscellaneous Credit Events : Any in BGF Path : Indication that at least one packet (flit) is in the bgf path (i.e. pipe to fifo))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_MISC.VN0_NO_D2K_FOR_ARB",
      EventDef::Encoding{.code = 0x5f, .umask = 0x04, .msr_values = {0x00}},
      R"(Miscellaneous Credit Events : No D2K For Arb)",
      R"(Miscellaneous Credit Events : No D2K For Arb : VN0 BL RSP message was blocked from arbitration request due to lack of D2K CMP credit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_MISC.VN1_NO_D2K_FOR_ARB",
      EventDef::Encoding{.code = 0x5f, .umask = 0x08, .msr_values = {0x00}},
      R"(Miscellaneous Credit Events)",
      R"(Miscellaneous Credit Events : VN1 BL RSP message was blocked from arbitration request due to lack of D2K CMP credits)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_MISC.LT1_FOR_D2K",
      EventDef::Encoding{.code = 0x5f, .umask = 0x10, .msr_values = {0x00}},
      R"(Miscellaneous Credit Events)",
      R"(Miscellaneous Credit Events : d2k credit count is less than 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_MISC.LT2_FOR_D2K",
      EventDef::Encoding{.code = 0x5f, .umask = 0x20, .msr_values = {0x00}},
      R"(Miscellaneous Credit Events)",
      R"(Miscellaneous Credit Events : d2k credit count is less than 2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.VNA_IN_USE",
      EventDef::Encoding{.code = 0x60, .umask = 0x01, .msr_values = {0x00}},
      R"(Credit Occupancy : VNA In Use)",
      R"(Credit Occupancy : VNA In Use : Remote UPI VNA credit occupancy (number of credits in use), accumulated across all cycles)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.FLITS_IN_FIFO",
      EventDef::Encoding{.code = 0x60, .umask = 0x02, .msr_values = {0x00}},
      R"(Credit Occupancy : Packets in BGF FIFO)",
      R"(Credit Occupancy : Packets in BGF FIFO : Occupancy of m3upi ingress -> upi link layer bgf; packets (flits) in fifo)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.FLITS_IN_PATH",
      EventDef::Encoding{.code = 0x60, .umask = 0x04, .msr_values = {0x00}},
      R"(Credit Occupancy : Packets in BGF Path)",
      R"(Credit Occupancy : Packets in BGF Path : Occupancy of m3upi ingress -> upi link layer bgf; packets (flits) in path (i.e. pipe to fifo or fifo))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.TxQ_CRD",
      EventDef::Encoding{.code = 0x60, .umask = 0x08, .msr_values = {0x00}},
      R"(Credit Occupancy : Transmit Credits)",
      R"(Credit Occupancy : Transmit Credits : Link layer transmit queue credit occupancy (credits in use), accumulated across all cycles)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.D2K_CRD",
      EventDef::Encoding{.code = 0x60, .umask = 0x10, .msr_values = {0x00}},
      R"(Credit Occupancy : D2K Credits)",
      R"(Credit Occupancy : D2K Credits : D2K completion fifo credit occupancy (credits in use), accumulated across all cycles)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.P1P_TOTAL",
      EventDef::Encoding{.code = 0x60, .umask = 0x20, .msr_values = {0x00}},
      R"(Credit Occupancy)",
      R"(Credit Occupancy : count of bl messages in pump-1-pending state, in marker table and in fifo)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.P1P_FIFO",
      EventDef::Encoding{.code = 0x60, .umask = 0x40, .msr_values = {0x00}},
      R"(Credit Occupancy)",
      R"(Credit Occupancy : count of bl messages in pump-1-pending state, in completion fifo only)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CRD_OCC.CONSUMED",
      EventDef::Encoding{.code = 0x60, .umask = 0x80, .msr_values = {0x00}},
      R"(Credit Occupancy : Credits Consumed)",
      R"(Credit Occupancy : Credits Consumed : number of remote vna credits consumed per cycle)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.AD_REQ",
      EventDef::Encoding{.code = 0x43, .umask = 0x01, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : REQ on AD)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : REQ on AD : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.AD_SNP",
      EventDef::Encoding{.code = 0x43, .umask = 0x02, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : SNP on AD)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : SNP on AD : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.AD_RSP",
      EventDef::Encoding{.code = 0x43, .umask = 0x04, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : RSP on AD)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : RSP on AD : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.BL_RSP",
      EventDef::Encoding{.code = 0x43, .umask = 0x08, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : RSP on BL)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : RSP on BL : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.BL_WB",
      EventDef::Encoding{.code = 0x43, .umask = 0x10, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : WB on BL)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : WB on BL : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.BL_NCB",
      EventDef::Encoding{.code = 0x43, .umask = 0x20, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : NCB on BL)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : NCB on BL : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_CYCLES_NE_VN0.BL_NCS",
      EventDef::Encoding{.code = 0x43, .umask = 0x40, .msr_values = {0x00}},
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : NCS on BL)",
      R"(VN0 Ingress (from CMS) Queue - Cycles Not Empty : NCS on BL : Counts the number of cycles when the UPI Ingress is not empty.  This tracks one of the three rings that are used by the UPI agent.  This can be used in conjunction with the UPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters. : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_DATA_FLITS_NOT_SENT.ALL",
      EventDef::Encoding{.code = 0x55, .umask = 0x01, .msr_values = {0x00}},
      R"(Data Flit Not Sent : All)",
      R"(Data Flit Not Sent : All : Data flit is ready for transmission but could not be sent : data flit is ready for transmission but could not be sent for any reason, e.g. low credits, low tsv, stall injection)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_DATA_FLITS_NOT_SENT.TSV_HI",
      EventDef::Encoding{.code = 0x55, .umask = 0x02, .msr_values = {0x00}},
      R"(Data Flit Not Sent : TSV High)",
      R"(Data Flit Not Sent : TSV High : Data flit is ready for transmission but could not be sent : data flit is ready for transmission but was not sent while tsv high)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_DATA_FLITS_NOT_SENT.VALID_FOR_FLIT",
      EventDef::Encoding{.code = 0x55, .umask = 0x04, .msr_values = {0x00}},
      R"(Data Flit Not Sent : Cycle valid for Flit)",
      R"(Data Flit Not Sent : Cycle valid for Flit : Data flit is ready for transmission but could not be sent : data flit is ready for transmission but was not sent while cycle is valid for flit transmission)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_DATA_FLITS_NOT_SENT.NO_BGF",
      EventDef::Encoding{.code = 0x55, .umask = 0x08, .msr_values = {0x00}},
      R"(Data Flit Not Sent : No BGF Credits)",
      R"(Data Flit Not Sent : No BGF Credits : Data flit is ready for transmission but could not be sent)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_DATA_FLITS_NOT_SENT.NO_TXQ",
      EventDef::Encoding{.code = 0x55, .umask = 0x10, .msr_values = {0x00}},
      R"(Data Flit Not Sent : No TxQ Credits)",
      R"(Data Flit Not Sent : No TxQ Credits : Data flit is ready for transmission but could not be sent)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P0_WAIT",
      EventDef::Encoding{.code = 0x57, .umask = 0x01, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence : Wait on Pump 0)",
      R"(Generating BL Data Flit Sequence : Wait on Pump 0 : generating bl data flit sequence; waiting for data pump 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P1_WAIT",
      EventDef::Encoding{.code = 0x57, .umask = 0x02, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence : Wait on Pump 1)",
      R"(Generating BL Data Flit Sequence : Wait on Pump 1 : generating bl data flit sequence; waiting for data pump 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P1P_TO_LIMBO",
      EventDef::Encoding{.code = 0x57, .umask = 0x04, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence)",
      R"(Generating BL Data Flit Sequence : a bl message finished but is in limbo and moved to pump-1-pending logic)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P1P_BUSY",
      EventDef::Encoding{.code = 0x57, .umask = 0x08, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence)",
      R"(Generating BL Data Flit Sequence : pump-1-pending logic is tracking at least one message)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P1P_AT_LIMIT",
      EventDef::Encoding{.code = 0x57, .umask = 0x10, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence)",
      R"(Generating BL Data Flit Sequence : pump-1-pending logic is at capacity (pending table plus completion fifo at limit))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P1P_HOLD_P0",
      EventDef::Encoding{.code = 0x57, .umask = 0x20, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence)",
      R"(Generating BL Data Flit Sequence : pump-1-pending logic is at or near capacity, such that pump-0-only bl messages are getting stalled in slotting stage)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_GEN_BL.P1P_FIFO_FULL",
      EventDef::Encoding{.code = 0x57, .umask = 0x40, .msr_values = {0x00}},
      R"(Generating BL Data Flit Sequence)",
      R"(Generating BL Data Flit Sequence : pump-1-pending completion fifo is full)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_MISC.S2REQ_RECEIVED",
      EventDef::Encoding{.code = 0x58, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_FLITS_MISC.S2REQ_RECEIVED)",
      R"(: slot 2 request received from link layer while idle (with no slot 2 request active immediately prior))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_MISC.S2REQ_WITHDRAWN",
      EventDef::Encoding{.code = 0x58, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_FLITS_MISC.S2REQ_WITHDRAWN)",
      R"(: slot 2 request withdrawn during hold-off period or service window)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_MISC.S2REQ_IN_HOLDOFF",
      EventDef::Encoding{.code = 0x58, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_FLITS_MISC.S2REQ_IN_HOLDOFF)",
      R"(: slot 2 request naturally serviced during hold-off period)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_MISC.S2REQ_IN_SERVICE",
      EventDef::Encoding{.code = 0x58, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_FLITS_MISC.S2REQ_IN_SERVICE)",
      R"(: slot 2 request forcibly serviced during service window)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.ALL",
      EventDef::Encoding{.code = 0x56, .umask = 0x01, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : All)",
      R"(Slotting BL Message Into Header Flit : All)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.NEED_DATA",
      EventDef::Encoding{.code = 0x56, .umask = 0x02, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : Needs Data Flit)",
      R"(Slotting BL Message Into Header Flit : Needs Data Flit : BL message requires data flit sequence)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.P0_WAIT",
      EventDef::Encoding{.code = 0x56, .umask = 0x04, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : Wait on Pump 0)",
      R"(Slotting BL Message Into Header Flit : Wait on Pump 0 : Waiting for header pump 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.P1_WAIT",
      EventDef::Encoding{.code = 0x56, .umask = 0x08, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : Wait on Pump 1)",
      R"(Slotting BL Message Into Header Flit : Wait on Pump 1 : Waiting for header pump 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.P1_NOT_REQ",
      EventDef::Encoding{.code = 0x56, .umask = 0x10, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : Don't Need Pump 1)",
      R"(Slotting BL Message Into Header Flit : Don't Need Pump 1 : Header pump 1 is not required for flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.P1_NOT_REQ_BUT_BUBBLE",
      EventDef::Encoding{.code = 0x56, .umask = 0x20, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : Don't Need Pump 1 - Bubble)",
      R"(Slotting BL Message Into Header Flit : Don't Need Pump 1 - Bubble : Header pump 1 is not required for flit but flit transmission delayed)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLITS_SLOT_BL.P1_NOT_REQ_NOT_AVAIL",
      EventDef::Encoding{.code = 0x56, .umask = 0x40, .msr_values = {0x00}},
      R"(Slotting BL Message Into Header Flit : Don't Need Pump 1 - Not Avail)",
      R"(Slotting BL Message Into Header Flit : Don't Need Pump 1 - Not Avail : Header pump 1 is not required for flit and not available)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.ACCUM",
      EventDef::Encoding{.code = 0x51, .umask = 0x01, .msr_values = {0x00}},
      R"(Flit Gen - Header 1 : Accumulate)",
      R"(Flit Gen - Header 1 : Accumulate : Events related to Header Flit Generation - Set 1 : Header flit slotting control state machine is in any accumulate state; multi-message flit may be assembled over multiple cycles)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.ACCUM_READ",
      EventDef::Encoding{.code = 0x51, .umask = 0x02, .msr_values = {0x00}},
      R"(Flit Gen - Header 1 : Accumulate Ready)",
      R"(Flit Gen - Header 1 : Accumulate Ready : Events related to Header Flit Generation - Set 1 : header flit slotting control state machine is in accum_ready state; flit is ready to send but transmission is blocked; more messages may be slotted into flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.ACCUM_WASTED",
      EventDef::Encoding{.code = 0x51, .umask = 0x04, .msr_values = {0x00}},
      R"(Flit Gen - Header 1 : Accumulate Wasted)",
      R"(Flit Gen - Header 1 : Accumulate Wasted : Events related to Header Flit Generation - Set 1 : Flit is being assembled over multiple cycles, but no additional message is being slotted into flit in current cycle; accumulate cycle is wasted)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.AHEAD_BLOCKED",
      EventDef::Encoding{.code = 0x51, .umask = 0x08, .msr_values = {0x00}},
      R"(Flit Gen - Header 1 : Run-Ahead - Blocked)",
      R"(Flit Gen - Header 1 : Run-Ahead - Blocked : Events related to Header Flit Generation - Set 1 : Header flit slotting entered run-ahead state; new header flit is started while transmission of prior, fully assembled flit is blocked)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.AHEAD_MSG1_DURING",
      EventDef::Encoding{.code = 0x51, .umask = 0x10, .msr_values = {0x00}},
      R"(Flit Gen - Header 1 : Run-Ahead - Message)",
      R"(Flit Gen - Header 1 : Run-Ahead - Message : Events related to Header Flit Generation - Set 1 : run-ahead mode: one message slotted during run-ahead)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.AHEAD_MSG2_AFTER",
      EventDef::Encoding{.code = 0x51, .umask = 0x20, .msr_values = {0x00}},
      R"(Flit Gen - Header 1)",
      R"(Flit Gen - Header 1 : Events related to Header Flit Generation - Set 1 : run-ahead mode: second message slotted immediately after run-ahead; potential run-ahead success)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.AHEAD_MSG2_SENT",
      EventDef::Encoding{.code = 0x51, .umask = 0x40, .msr_values = {0x00}},
      R"(Flit Gen - Header 1)",
      R"(Flit Gen - Header 1 : Events related to Header Flit Generation - Set 1 : run-ahead mode: two (or three) message flit sent immediately after run-ahead; complete run-ahead success)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR1.AHEAD_MSG1_AFTER",
      EventDef::Encoding{.code = 0x51, .umask = 0x80, .msr_values = {0x00}},
      R"(Flit Gen - Header 1)",
      R"(Flit Gen - Header 1 : Events related to Header Flit Generation - Set 1 : run-ahead mode: message was slotted only after run-ahead was over; run-ahead mode definitely wasted)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR2.RMSTALL",
      EventDef::Encoding{.code = 0x52, .umask = 0x01, .msr_values = {0x00}},
      R"(Flit Gen - Header 2 : Rate-matching Stall)",
      R"(Flit Gen - Header 2 : Rate-matching Stall : Events related to Header Flit Generation - Set 2 : Rate-matching stall injected)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR2.RMSTALL_NOMSG",
      EventDef::Encoding{.code = 0x52, .umask = 0x02, .msr_values = {0x00}},
      R"(Flit Gen - Header 2 : Rate-matching Stall - No Message)",
      R"(Flit Gen - Header 2 : Rate-matching Stall - No Message : Events related to Header Flit Generation - Set 2 : Rate matching stall injected, but no additional message slotted during stall cycle)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR2.PAR",
      EventDef::Encoding{.code = 0x52, .umask = 0x04, .msr_values = {0x00}},
      R"(Flit Gen - Header 2 : Parallel Ok)",
      R"(Flit Gen - Header 2 : Parallel Ok : Events related to Header Flit Generation - Set 2 : new header flit construction may proceed in parallel with data flit sequence)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR2.PAR_MSG",
      EventDef::Encoding{.code = 0x52, .umask = 0x08, .msr_values = {0x00}},
      R"(Flit Gen - Header 2 : Parallel Message)",
      R"(Flit Gen - Header 2 : Parallel Message : Events related to Header Flit Generation - Set 2 : message is slotted into header flit in parallel with data flit sequence)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_FLIT_GEN_HDR2.PAR_FLIT",
      EventDef::Encoding{.code = 0x52, .umask = 0x10, .msr_values = {0x00}},
      R"(Flit Gen - Header 2 : Parallel Flit Finished)",
      R"(Flit Gen - Header 2 : Parallel Flit Finished : Events related to Header Flit Generation - Set 2 : header flit finished assembly in parallel with data flit sequence)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.1_MSG",
      EventDef::Encoding{.code = 0x54, .umask = 0x01, .msr_values = {0x00}},
      R"(Sent Header Flit : One Message)",
      R"(Sent Header Flit : One Message : One message in flit; VNA or non-VNA flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.2_MSGS",
      EventDef::Encoding{.code = 0x54, .umask = 0x02, .msr_values = {0x00}},
      R"(Sent Header Flit : Two Messages)",
      R"(Sent Header Flit : Two Messages : Two messages in flit; VNA flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.3_MSGS",
      EventDef::Encoding{.code = 0x54, .umask = 0x04, .msr_values = {0x00}},
      R"(Sent Header Flit : Three Messages)",
      R"(Sent Header Flit : Three Messages : Three messages in flit; VNA flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.1_MSG_VNX",
      EventDef::Encoding{.code = 0x54, .umask = 0x08, .msr_values = {0x00}},
      R"(Sent Header Flit : One Message in non-VNA)",
      R"(Sent Header Flit : One Message in non-VNA : One message in flit; non-VNA flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.SLOTS_1",
      EventDef::Encoding{.code = 0x54, .umask = 0x10, .msr_values = {0x00}},
      R"(Sent Header Flit : One Slot Taken)",
      R"(Sent Header Flit : One Slot Taken)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.SLOTS_2",
      EventDef::Encoding{.code = 0x54, .umask = 0x20, .msr_values = {0x00}},
      R"(Sent Header Flit : Two Slots Taken)",
      R"(Sent Header Flit : Two Slots Taken)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLITS_SENT.SLOTS_3",
      EventDef::Encoding{.code = 0x54, .umask = 0x40, .msr_values = {0x00}},
      R"(Sent Header Flit : All Slots Taken)",
      R"(Sent Header Flit : All Slots Taken)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.ALL",
      EventDef::Encoding{.code = 0x53, .umask = 0x01, .msr_values = {0x00}},
      R"(Header Not Sent : All)",
      R"(Header Not Sent : All : header flit is ready for transmission but could not be sent : header flit is ready for transmission but could not be sent for any reason, e.g. no credits, low tsv, stall injection)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.TSV_HI",
      EventDef::Encoding{.code = 0x53, .umask = 0x02, .msr_values = {0x00}},
      R"(Header Not Sent : TSV High)",
      R"(Header Not Sent : TSV High : header flit is ready for transmission but could not be sent : header flit is ready for transmission but was not sent while tsv high)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.VALID_FOR_FLIT",
      EventDef::Encoding{.code = 0x53, .umask = 0x04, .msr_values = {0x00}},
      R"(Header Not Sent : Cycle valid for Flit)",
      R"(Header Not Sent : Cycle valid for Flit : header flit is ready for transmission but could not be sent : header flit is ready for transmission but was not sent while cycle is valid for flit transmission)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.NO_BGF_CRD",
      EventDef::Encoding{.code = 0x53, .umask = 0x08, .msr_values = {0x00}},
      R"(Header Not Sent : No BGF Credits)",
      R"(Header Not Sent : No BGF Credits : header flit is ready for transmission but could not be sent : No BGF credits available)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.NO_TXQ_CRD",
      EventDef::Encoding{.code = 0x53, .umask = 0x10, .msr_values = {0x00}},
      R"(Header Not Sent : No TxQ Credits)",
      R"(Header Not Sent : No TxQ Credits : header flit is ready for transmission but could not be sent : No TxQ credits available)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.NO_BGF_NO_MSG",
      EventDef::Encoding{.code = 0x53, .umask = 0x20, .msr_values = {0x00}},
      R"(Header Not Sent : No BGF Credits + No Extra Message Slotted)",
      R"(Header Not Sent : No BGF Credits + No Extra Message Slotted : header flit is ready for transmission but could not be sent : No BGF credits available; no additional message slotted into flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HDR_FLIT_NOT_SENT.NO_TXQ_NO_MSG",
      EventDef::Encoding{.code = 0x53, .umask = 0x40, .msr_values = {0x00}},
      R"(Header Not Sent : No TxQ Credits + No Extra Message Slotted)",
      R"(Header Not Sent : No TxQ Credits + No Extra Message Slotted : header flit is ready for transmission but could not be sent : No TxQ credits available; no additional message slotted into flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HELD.VN0",
      EventDef::Encoding{.code = 0x50, .umask = 0x01, .msr_values = {0x00}},
      R"(Message Held : VN0)",
      R"(Message Held : VN0 : vn0 message(s) that couldn't be slotted into last vn0 flit are held in slotting stage while processing vn1 flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HELD.VN1",
      EventDef::Encoding{.code = 0x50, .umask = 0x02, .msr_values = {0x00}},
      R"(Message Held : VN1)",
      R"(Message Held : VN1 : vn1 message(s) that couldn't be slotted into last vn1 flit are held in slotting stage while processing vn0 flit)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HELD.PARALLEL_ATTEMPT",
      EventDef::Encoding{.code = 0x50, .umask = 0x04, .msr_values = {0x00}},
      R"(Message Held : Parallel Attempt)",
      R"(Message Held : Parallel Attempt : ad and bl messages attempted to slot into the same flit in parallel)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HELD.PARALLEL_SUCCESS",
      EventDef::Encoding{.code = 0x50, .umask = 0x08, .msr_values = {0x00}},
      R"(Message Held : Parallel Success)",
      R"(Message Held : Parallel Success : ad and bl messages were actually slotted into the same flit in paralle)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HELD.CANT_SLOT_AD",
      EventDef::Encoding{.code = 0x50, .umask = 0x10, .msr_values = {0x00}},
      R"(Message Held : Can't Slot AD)",
      R"(Message Held : Can't Slot AD : some AD message could not be slotted (logical OR of all AD events under INGR_SLOT_CANT_MC_VN{0,1}))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_HELD.CANT_SLOT_BL",
      EventDef::Encoding{.code = 0x50, .umask = 0x20, .msr_values = {0x00}},
      R"(Message Held : Can't Slot BL)",
      R"(Message Held : Can't Slot BL : some BL message could not be slotted (logical OR of all BL events under INGR_SLOT_CANT_MC_VN{0,1}))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.AD_REQ",
      EventDef::Encoding{.code = 0x4e, .umask = 0x01, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : REQ on AD)",
      R"(VN0 message can't slot into flit : REQ on AD : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.AD_SNP",
      EventDef::Encoding{.code = 0x4e, .umask = 0x02, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : SNP on AD)",
      R"(VN0 message can't slot into flit : SNP on AD : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.AD_RSP",
      EventDef::Encoding{.code = 0x4e, .umask = 0x04, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : RSP on AD)",
      R"(VN0 message can't slot into flit : RSP on AD : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.BL_RSP",
      EventDef::Encoding{.code = 0x4e, .umask = 0x08, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : RSP on BL)",
      R"(VN0 message can't slot into flit : RSP on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.BL_WB",
      EventDef::Encoding{.code = 0x4e, .umask = 0x10, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : WB on BL)",
      R"(VN0 message can't slot into flit : WB on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.BL_NCB",
      EventDef::Encoding{.code = 0x4e, .umask = 0x20, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : NCB on BL)",
      R"(VN0 message can't slot into flit : NCB on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN0.BL_NCS",
      EventDef::Encoding{.code = 0x4e, .umask = 0x40, .msr_values = {0x00}},
      R"(VN0 message can't slot into flit : NCS on BL)",
      R"(VN0 message can't slot into flit : NCS on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.AD_REQ",
      EventDef::Encoding{.code = 0x4f, .umask = 0x01, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : REQ on AD)",
      R"(VN1 message can't slot into flit : REQ on AD : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.AD_SNP",
      EventDef::Encoding{.code = 0x4f, .umask = 0x02, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : SNP on AD)",
      R"(VN1 message can't slot into flit : SNP on AD : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.AD_RSP",
      EventDef::Encoding{.code = 0x4f, .umask = 0x04, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : RSP on AD)",
      R"(VN1 message can't slot into flit : RSP on AD : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.BL_RSP",
      EventDef::Encoding{.code = 0x4f, .umask = 0x08, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : RSP on BL)",
      R"(VN1 message can't slot into flit : RSP on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.BL_WB",
      EventDef::Encoding{.code = 0x4f, .umask = 0x10, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : WB on BL)",
      R"(VN1 message can't slot into flit : WB on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.BL_NCB",
      EventDef::Encoding{.code = 0x4f, .umask = 0x20, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : NCB on BL)",
      R"(VN1 message can't slot into flit : NCB on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_PACKING_MISS_VN1.BL_NCS",
      EventDef::Encoding{.code = 0x4f, .umask = 0x40, .msr_values = {0x00}},
      R"(VN1 message can't slot into flit : NCS on BL)",
      R"(VN1 message can't slot into flit : NCS on BL : Count cases where Ingress has packets to send but did not have time to pack into flit before sending to Agent so slot was left NULL which could have been used. : Non-Coherent Standard (NCS) messages on BL.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD.CORRECTED",
      EventDef::Encoding{.code = 0x5a, .umask = 0x01, .msr_values = {0x00}},
      R"(Remote VNA Credits : Corrected)",
      R"(Remote VNA Credits : Corrected : Number of remote vna credits corrected (local return) per cycle)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD.LT1",
      EventDef::Encoding{.code = 0x5a, .umask = 0x02, .msr_values = {0x00}},
      R"(Remote VNA Credits : Level < 1)",
      R"(Remote VNA Credits : Level < 1 : Remote vna credit level is less than 1 (i.e. no vna credits available))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD.LT4",
      EventDef::Encoding{.code = 0x5a, .umask = 0x04, .msr_values = {0x00}},
      R"(Remote VNA Credits : Level < 4)",
      R"(Remote VNA Credits : Level < 4 : Remote vna credit level is less than 4; bl (or ad requiring 4 vna) cannot arb on vna)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD.LT5",
      EventDef::Encoding{.code = 0x5a, .umask = 0x08, .msr_values = {0x00}},
      R"(Remote VNA Credits : Level < 5)",
      R"(Remote VNA Credits : Level < 5 : Remote vna credit level is less than 5; parallel ad/bl arb on vna not possible)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD.LT10",
      EventDef::Encoding{.code = 0x5a, .umask = 0x10, .msr_values = {0x00}},
      R"(Remote VNA Credits : Level < 10)",
      R"(Remote VNA Credits : Level < 10 : remote vna credit level is less than 10; parallel vn0/vn1 arb not possible)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD.ANY_IN_USE",
      EventDef::Encoding{.code = 0x5a, .umask = 0x20, .msr_values = {0x00}},
      R"(Remote VNA Credits : Any In Use)",
      R"(Remote VNA Credits : Any In Use : At least one remote vna credit is in use)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.REQ_VN01_ALLOC_LT10",
      EventDef::Encoding{.code = 0x59, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.REQ_VN01_ALLOC_LT10)",
      R"(: remote vna credit count was less than 10 and allocation to vn0 or vn1 was required)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.REQ_ADBL_ALLOC_L5",
      EventDef::Encoding{.code = 0x59, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.REQ_ADBL_ALLOC_L5)",
      R"(: remote vna credit count was less than 5 and allocation to ad or bl messages was required)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.VN0_ONLY",
      EventDef::Encoding{.code = 0x59, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.VN0_ONLY)",
      R"(: remote vna credits were allocated only to vn0, not to vn1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.VN1_ONLY",
      EventDef::Encoding{.code = 0x59, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.VN1_ONLY)",
      R"(: remote vna credits were allocated only to vn1, not to vn0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.VN0_JUST_AD",
      EventDef::Encoding{.code = 0x59, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.VN0_JUST_AD)",
      R"(: on vn0, remote vna credits were allocated only to ad messages, not to bl)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.VN0_JUST_BL",
      EventDef::Encoding{.code = 0x59, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.VN0_JUST_BL)",
      R"(: on vn0, remote vna credits were allocated only to bl messages, not to ad)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.VN1_JUST_AD",
      EventDef::Encoding{.code = 0x59, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.VN1_JUST_AD)",
      R"(: on vn1, remote vna credits were allocated only to ad messages, not to bl)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_RxC_VNA_CRD_MISC.VN1_JUST_BL",
      EventDef::Encoding{.code = 0x59, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_M3UPI_RxC_VNA_CRD_MISC.VN1_JUST_BL)",
      R"(: on vn1, remote vna credits were allocated only to bl messages, not to ad)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN0_REQ",
      EventDef::Encoding{.code = 0x30, .umask = 0x01, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN0 REQ Messages)",
      R"(Failed ARB for AD : VN0 REQ Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN0_SNP",
      EventDef::Encoding{.code = 0x30, .umask = 0x02, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN0 SNP Messages)",
      R"(Failed ARB for AD : VN0 SNP Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN0_RSP",
      EventDef::Encoding{.code = 0x30, .umask = 0x04, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN0 RSP Messages)",
      R"(Failed ARB for AD : VN0 RSP Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN0_WB",
      EventDef::Encoding{.code = 0x30, .umask = 0x08, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN0 WB Messages)",
      R"(Failed ARB for AD : VN0 WB Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN1_REQ",
      EventDef::Encoding{.code = 0x30, .umask = 0x10, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN1 REQ Messages)",
      R"(Failed ARB for AD : VN1 REQ Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN1_SNP",
      EventDef::Encoding{.code = 0x30, .umask = 0x20, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN1 SNP Messages)",
      R"(Failed ARB for AD : VN1 SNP Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN1_RSP",
      EventDef::Encoding{.code = 0x30, .umask = 0x40, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN1 RSP Messages)",
      R"(Failed ARB for AD : VN1 RSP Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_ARB_FAIL.VN1_WB",
      EventDef::Encoding{.code = 0x30, .umask = 0x80, .msr_values = {0x00}},
      R"(Failed ARB for AD : VN1 WB Messages)",
      R"(Failed ARB for AD : VN1 WB Messages : AD arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_BYPASS.AD_SLOT0",
      EventDef::Encoding{.code = 0x2c, .umask = 0x01, .msr_values = {0x00}},
      R"(AD FlowQ Bypass)",
      R"(AD FlowQ Bypass : Counts cases when the AD flowQ is bypassed (S0, S1 and S2 indicate which slot was bypassed with S0 having the highest priority and S2 the least))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_BYPASS.AD_SLOT1",
      EventDef::Encoding{.code = 0x2c, .umask = 0x02, .msr_values = {0x00}},
      R"(AD FlowQ Bypass)",
      R"(AD FlowQ Bypass : Counts cases when the AD flowQ is bypassed (S0, S1 and S2 indicate which slot was bypassed with S0 having the highest priority and S2 the least))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_BYPASS.AD_SLOT2",
      EventDef::Encoding{.code = 0x2c, .umask = 0x04, .msr_values = {0x00}},
      R"(AD FlowQ Bypass)",
      R"(AD FlowQ Bypass : Counts cases when the AD flowQ is bypassed (S0, S1 and S2 indicate which slot was bypassed with S0 having the highest priority and S2 the least))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_BYPASS.BL_EARLY_RSP",
      EventDef::Encoding{.code = 0x2c, .umask = 0x08, .msr_values = {0x00}},
      R"(AD FlowQ Bypass)",
      R"(AD FlowQ Bypass : Counts cases when the AD flowQ is bypassed (S0, S1 and S2 indicate which slot was bypassed with S0 having the highest priority and S2 the least))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN0_REQ",
      EventDef::Encoding{.code = 0x27, .umask = 0x01, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN0 REQ Messages)",
      R"(AD Flow Q Not Empty : VN0 REQ Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN0_SNP",
      EventDef::Encoding{.code = 0x27, .umask = 0x02, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN0 SNP Messages)",
      R"(AD Flow Q Not Empty : VN0 SNP Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN0_RSP",
      EventDef::Encoding{.code = 0x27, .umask = 0x04, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN0 RSP Messages)",
      R"(AD Flow Q Not Empty : VN0 RSP Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN0_WB",
      EventDef::Encoding{.code = 0x27, .umask = 0x08, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN0 WB Messages)",
      R"(AD Flow Q Not Empty : VN0 WB Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN1_REQ",
      EventDef::Encoding{.code = 0x27, .umask = 0x10, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN1 REQ Messages)",
      R"(AD Flow Q Not Empty : VN1 REQ Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN1_SNP",
      EventDef::Encoding{.code = 0x27, .umask = 0x20, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN1 SNP Messages)",
      R"(AD Flow Q Not Empty : VN1 SNP Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN1_RSP",
      EventDef::Encoding{.code = 0x27, .umask = 0x40, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN1 RSP Messages)",
      R"(AD Flow Q Not Empty : VN1 RSP Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_CYCLES_NE.VN1_WB",
      EventDef::Encoding{.code = 0x27, .umask = 0x80, .msr_values = {0x00}},
      R"(AD Flow Q Not Empty : VN1 WB Messages)",
      R"(AD Flow Q Not Empty : VN1 WB Messages : Number of cycles the AD Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN0_REQ",
      EventDef::Encoding{.code = 0x2d, .umask = 0x01, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN0 REQ Messages)",
      R"(AD Flow Q Inserts : VN0 REQ Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN0_SNP",
      EventDef::Encoding{.code = 0x2d, .umask = 0x02, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN0 SNP Messages)",
      R"(AD Flow Q Inserts : VN0 SNP Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN0_RSP",
      EventDef::Encoding{.code = 0x2d, .umask = 0x04, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN0 RSP Messages)",
      R"(AD Flow Q Inserts : VN0 RSP Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN0_WB",
      EventDef::Encoding{.code = 0x2d, .umask = 0x08, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN0 WB Messages)",
      R"(AD Flow Q Inserts : VN0 WB Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN1_REQ",
      EventDef::Encoding{.code = 0x2d, .umask = 0x10, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN1 REQ Messages)",
      R"(AD Flow Q Inserts : VN1 REQ Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN1_SNP",
      EventDef::Encoding{.code = 0x2d, .umask = 0x20, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN1 SNP Messages)",
      R"(AD Flow Q Inserts : VN1 SNP Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_INSERTS.VN1_RSP",
      EventDef::Encoding{.code = 0x2d, .umask = 0x40, .msr_values = {0x00}},
      R"(AD Flow Q Inserts : VN1 RSP Messages)",
      R"(AD Flow Q Inserts : VN1 RSP Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN0_REQ",
      EventDef::Encoding{.code = 0x1c, .umask = 0x01, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN0 REQ Messages)",
      R"(AD Flow Q Occupancy : VN0 REQ Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN0_SNP",
      EventDef::Encoding{.code = 0x1c, .umask = 0x02, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN0 SNP Messages)",
      R"(AD Flow Q Occupancy : VN0 SNP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN0_RSP",
      EventDef::Encoding{.code = 0x1c, .umask = 0x04, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN0 RSP Messages)",
      R"(AD Flow Q Occupancy : VN0 RSP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN0_WB",
      EventDef::Encoding{.code = 0x1c, .umask = 0x08, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN0 WB Messages)",
      R"(AD Flow Q Occupancy : VN0 WB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN1_REQ",
      EventDef::Encoding{.code = 0x1c, .umask = 0x10, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN1 REQ Messages)",
      R"(AD Flow Q Occupancy : VN1 REQ Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN1_SNP",
      EventDef::Encoding{.code = 0x1c, .umask = 0x20, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN1 SNP Messages)",
      R"(AD Flow Q Occupancy : VN1 SNP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_OCCUPANCY.VN1_RSP",
      EventDef::Encoding{.code = 0x1c, .umask = 0x40, .msr_values = {0x00}},
      R"(AD Flow Q Occupancy : VN1 RSP Messages)",
      R"(AD Flow Q Occupancy : VN1 RSP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN0_RSP",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN0 RSP Messages)",
      R"(Failed ARB for BL : VN0 RSP Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN0_WB",
      EventDef::Encoding{.code = 0x35, .umask = 0x02, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN0 WB Messages)",
      R"(Failed ARB for BL : VN0 WB Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN0_NCB",
      EventDef::Encoding{.code = 0x35, .umask = 0x04, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN0 NCB Messages)",
      R"(Failed ARB for BL : VN0 NCB Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN0_NCS",
      EventDef::Encoding{.code = 0x35, .umask = 0x08, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN0 NCS Messages)",
      R"(Failed ARB for BL : VN0 NCS Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN1_RSP",
      EventDef::Encoding{.code = 0x35, .umask = 0x10, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN1 RSP Messages)",
      R"(Failed ARB for BL : VN1 RSP Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN1_WB",
      EventDef::Encoding{.code = 0x35, .umask = 0x20, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN1 WB Messages)",
      R"(Failed ARB for BL : VN1 WB Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN1_NCB",
      EventDef::Encoding{.code = 0x35, .umask = 0x40, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN1 NCS Messages)",
      R"(Failed ARB for BL : VN1 NCS Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_ARB_FAIL.VN1_NCS",
      EventDef::Encoding{.code = 0x35, .umask = 0x80, .msr_values = {0x00}},
      R"(Failed ARB for BL : VN1 NCB Messages)",
      R"(Failed ARB for BL : VN1 NCB Messages : BL arb but no win; arb request asserted but not won)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN0_REQ",
      EventDef::Encoding{.code = 0x28, .umask = 0x01, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN0 REQ Messages)",
      R"(BL Flow Q Not Empty : VN0 REQ Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN0_SNP",
      EventDef::Encoding{.code = 0x28, .umask = 0x02, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN0 SNP Messages)",
      R"(BL Flow Q Not Empty : VN0 SNP Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN0_RSP",
      EventDef::Encoding{.code = 0x28, .umask = 0x04, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN0 RSP Messages)",
      R"(BL Flow Q Not Empty : VN0 RSP Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN0_WB",
      EventDef::Encoding{.code = 0x28, .umask = 0x08, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN0 WB Messages)",
      R"(BL Flow Q Not Empty : VN0 WB Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN1_REQ",
      EventDef::Encoding{.code = 0x28, .umask = 0x10, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN1 REQ Messages)",
      R"(BL Flow Q Not Empty : VN1 REQ Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN1_SNP",
      EventDef::Encoding{.code = 0x28, .umask = 0x20, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN1 SNP Messages)",
      R"(BL Flow Q Not Empty : VN1 SNP Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN1_RSP",
      EventDef::Encoding{.code = 0x28, .umask = 0x40, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN1 RSP Messages)",
      R"(BL Flow Q Not Empty : VN1 RSP Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_CYCLES_NE.VN1_WB",
      EventDef::Encoding{.code = 0x28, .umask = 0x80, .msr_values = {0x00}},
      R"(BL Flow Q Not Empty : VN1 WB Messages)",
      R"(BL Flow Q Not Empty : VN1 WB Messages : Number of cycles the BL Egress queue is Not Empty)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN0_NCB",
      EventDef::Encoding{.code = 0x2e, .umask = 0x01, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN0 RSP Messages)",
      R"(BL Flow Q Inserts : VN0 RSP Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN0_NCS",
      EventDef::Encoding{.code = 0x2e, .umask = 0x02, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN0 WB Messages)",
      R"(BL Flow Q Inserts : VN0 WB Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN0_WB",
      EventDef::Encoding{.code = 0x2e, .umask = 0x04, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN0 NCB Messages)",
      R"(BL Flow Q Inserts : VN0 NCB Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN0_RSP",
      EventDef::Encoding{.code = 0x2e, .umask = 0x08, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN0 NCS Messages)",
      R"(BL Flow Q Inserts : VN0 NCS Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN1_NCB",
      EventDef::Encoding{.code = 0x2e, .umask = 0x10, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN1 RSP Messages)",
      R"(BL Flow Q Inserts : VN1 RSP Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN1_NCS",
      EventDef::Encoding{.code = 0x2e, .umask = 0x20, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN1 WB Messages)",
      R"(BL Flow Q Inserts : VN1 WB Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN1_WB",
      EventDef::Encoding{.code = 0x2e, .umask = 0x40, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN1_NCS Messages)",
      R"(BL Flow Q Inserts : VN1_NCS Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_INSERTS.VN1_RSP",
      EventDef::Encoding{.code = 0x2e, .umask = 0x80, .msr_values = {0x00}},
      R"(BL Flow Q Inserts : VN1_NCB Messages)",
      R"(BL Flow Q Inserts : VN1_NCB Messages : Counts the number of allocations into the QPI FlowQ. This can be used in conjunction with the QPI FlowQ Occupancy Accumulator event in order to calculate average queue latency.  Only a single FlowQ queue can be tracked at any given time.  It is not possible to filter based on direction or polarity.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN0_RSP",
      EventDef::Encoding{.code = 0x1d, .umask = 0x01, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 RSP Messages)",
      R"(BL Flow Q Occupancy : VN0 RSP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN0_WB",
      EventDef::Encoding{.code = 0x1d, .umask = 0x02, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 WB Messages)",
      R"(BL Flow Q Occupancy : VN0 WB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN0_NCB",
      EventDef::Encoding{.code = 0x1d, .umask = 0x04, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 NCB Messages)",
      R"(BL Flow Q Occupancy : VN0 NCB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN0_NCS",
      EventDef::Encoding{.code = 0x1d, .umask = 0x08, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 NCS Messages)",
      R"(BL Flow Q Occupancy : VN0 NCS Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN1_RSP",
      EventDef::Encoding{.code = 0x1d, .umask = 0x10, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1 RSP Messages)",
      R"(BL Flow Q Occupancy : VN1 RSP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN1_WB",
      EventDef::Encoding{.code = 0x1d, .umask = 0x20, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1 WB Messages)",
      R"(BL Flow Q Occupancy : VN1 WB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN1_NCB",
      EventDef::Encoding{.code = 0x1d, .umask = 0x40, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1_NCS Messages)",
      R"(BL Flow Q Occupancy : VN1_NCS Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_FLQ_OCCUPANCY.VN1_NCS",
      EventDef::Encoding{.code = 0x1d, .umask = 0x80, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1_NCB Messages)",
      R"(BL Flow Q Occupancy : VN1_NCB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_WB_FLQ_OCCUPANCY.VN0_LOCAL",
      EventDef::Encoding{.code = 0x1f, .umask = 0x01, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 RSP Messages)",
      R"(BL Flow Q Occupancy : VN0 RSP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_WB_FLQ_OCCUPANCY.VN0_THROUGH",
      EventDef::Encoding{.code = 0x1f, .umask = 0x02, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 WB Messages)",
      R"(BL Flow Q Occupancy : VN0 WB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_WB_FLQ_OCCUPANCY.VN0_WRPULL",
      EventDef::Encoding{.code = 0x1f, .umask = 0x04, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN0 NCB Messages)",
      R"(BL Flow Q Occupancy : VN0 NCB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_WB_FLQ_OCCUPANCY.VN1_LOCAL",
      EventDef::Encoding{.code = 0x1f, .umask = 0x10, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1 RSP Messages)",
      R"(BL Flow Q Occupancy : VN1 RSP Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_WB_FLQ_OCCUPANCY.VN1_THROUGH",
      EventDef::Encoding{.code = 0x1f, .umask = 0x20, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1 WB Messages)",
      R"(BL Flow Q Occupancy : VN1 WB Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_BL_WB_FLQ_OCCUPANCY.VN1_WRPULL",
      EventDef::Encoding{.code = 0x1f, .umask = 0x40, .msr_values = {0x00}},
      R"(BL Flow Q Occupancy : VN1_NCS Messages)",
      R"(BL Flow Q Occupancy : VN1_NCS Messages)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VNA",
      EventDef::Encoding{.code = 0x20, .umask = 0x01, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VNA)",
      R"(UPI0 AD Credits Empty : VNA : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VN0_REQ",
      EventDef::Encoding{.code = 0x20, .umask = 0x02, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VN0 REQ Messages)",
      R"(UPI0 AD Credits Empty : VN0 REQ Messages : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VN0_SNP",
      EventDef::Encoding{.code = 0x20, .umask = 0x04, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VN0 SNP Messages)",
      R"(UPI0 AD Credits Empty : VN0 SNP Messages : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VN0_RSP",
      EventDef::Encoding{.code = 0x20, .umask = 0x08, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VN0 RSP Messages)",
      R"(UPI0 AD Credits Empty : VN0 RSP Messages : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VN1_REQ",
      EventDef::Encoding{.code = 0x20, .umask = 0x10, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VN1 REQ Messages)",
      R"(UPI0 AD Credits Empty : VN1 REQ Messages : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VN1_SNP",
      EventDef::Encoding{.code = 0x20, .umask = 0x20, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VN1 SNP Messages)",
      R"(UPI0 AD Credits Empty : VN1 SNP Messages : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_AD_CREDITS_EMPTY.VN1_RSP",
      EventDef::Encoding{.code = 0x20, .umask = 0x40, .msr_values = {0x00}},
      R"(UPI0 AD Credits Empty : VN1 RSP Messages)",
      R"(UPI0 AD Credits Empty : VN1 RSP Messages : No credits available to send to UPIs on the AD Ring)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VNA",
      EventDef::Encoding{.code = 0x21, .umask = 0x01, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VNA)",
      R"(UPI0 BL Credits Empty : VNA : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VN0_RSP",
      EventDef::Encoding{.code = 0x21, .umask = 0x02, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VN0 REQ Messages)",
      R"(UPI0 BL Credits Empty : VN0 REQ Messages : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VN0_NCS_NCB",
      EventDef::Encoding{.code = 0x21, .umask = 0x04, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VN0 RSP Messages)",
      R"(UPI0 BL Credits Empty : VN0 RSP Messages : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VN0_WB",
      EventDef::Encoding{.code = 0x21, .umask = 0x08, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VN0 SNP Messages)",
      R"(UPI0 BL Credits Empty : VN0 SNP Messages : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VN1_RSP",
      EventDef::Encoding{.code = 0x21, .umask = 0x10, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VN1 REQ Messages)",
      R"(UPI0 BL Credits Empty : VN1 REQ Messages : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VN1_NCS_NCB",
      EventDef::Encoding{.code = 0x21, .umask = 0x20, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VN1 RSP Messages)",
      R"(UPI0 BL Credits Empty : VN1 RSP Messages : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_UPI_PEER_BL_CREDITS_EMPTY.VN1_WB",
      EventDef::Encoding{.code = 0x21, .umask = 0x40, .msr_values = {0x00}},
      R"(UPI0 BL Credits Empty : VN1 SNP Messages)",
      R"(UPI0 BL Credits Empty : VN1 SNP Messages : No credits available to send to UPI on the BL Ring (diff between non-SMI and SMI mode))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_CREDITS_USED.REQ",
      EventDef::Encoding{.code = 0x5b, .umask = 0x01, .msr_values = {0x00}},
      R"(VN0 Credit Used : REQ on AD)",
      R"(VN0 Credit Used : REQ on AD : Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across UPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers. : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_CREDITS_USED.SNP",
      EventDef::Encoding{.code = 0x5b, .umask = 0x02, .msr_values = {0x00}},
      R"(VN0 Credit Used : SNP on AD)",
      R"(VN0 Credit Used : SNP on AD : Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across UPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers. : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_CREDITS_USED.RSP",
      EventDef::Encoding{.code = 0x5b, .umask = 0x04, .msr_values = {0x00}},
      R"(VN0 Credit Used : RSP on AD)",
      R"(VN0 Credit Used : RSP on AD : Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across UPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers. : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_CREDITS_USED.WB",
      EventDef::Encoding{.code = 0x5b, .umask = 0x08, .msr_values = {0x00}},
      R"(VN0 Credit Used : RSP on BL)",
      R"(VN0 Credit Used : RSP on BL : Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across UPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers. : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_CREDITS_USED.NCB",
      EventDef::Encoding{.code = 0x5b, .umask = 0x10, .msr_values = {0x00}},
      R"(VN0 Credit Used : WB on BL)",
      R"(VN0 Credit Used : WB on BL : Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across UPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers. : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_CREDITS_USED.NCS",
      EventDef::Encoding{.code = 0x5b, .umask = 0x20, .msr_values = {0x00}},
      R"(VN0 Credit Used : NCB on BL)",
      R"(VN0 Credit Used : NCB on BL : Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across UPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers. : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_NO_CREDITS.REQ",
      EventDef::Encoding{.code = 0x5d, .umask = 0x01, .msr_values = {0x00}},
      R"(VN0 No Credits : REQ on AD)",
      R"(VN0 No Credits : REQ on AD : Number of Cycles there were no VN0 Credits : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_NO_CREDITS.SNP",
      EventDef::Encoding{.code = 0x5d, .umask = 0x02, .msr_values = {0x00}},
      R"(VN0 No Credits : SNP on AD)",
      R"(VN0 No Credits : SNP on AD : Number of Cycles there were no VN0 Credits : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_NO_CREDITS.RSP",
      EventDef::Encoding{.code = 0x5d, .umask = 0x04, .msr_values = {0x00}},
      R"(VN0 No Credits : RSP on AD)",
      R"(VN0 No Credits : RSP on AD : Number of Cycles there were no VN0 Credits : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_NO_CREDITS.WB",
      EventDef::Encoding{.code = 0x5d, .umask = 0x08, .msr_values = {0x00}},
      R"(VN0 No Credits : RSP on BL)",
      R"(VN0 No Credits : RSP on BL : Number of Cycles there were no VN0 Credits : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_NO_CREDITS.NCB",
      EventDef::Encoding{.code = 0x5d, .umask = 0x10, .msr_values = {0x00}},
      R"(VN0 No Credits : WB on BL)",
      R"(VN0 No Credits : WB on BL : Number of Cycles there were no VN0 Credits : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN0_NO_CREDITS.NCS",
      EventDef::Encoding{.code = 0x5d, .umask = 0x20, .msr_values = {0x00}},
      R"(VN0 No Credits : NCB on BL)",
      R"(VN0 No Credits : NCB on BL : Number of Cycles there were no VN0 Credits : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_CREDITS_USED.REQ",
      EventDef::Encoding{.code = 0x5c, .umask = 0x01, .msr_values = {0x00}},
      R"(VN1 Credit Used : REQ on AD)",
      R"(VN1 Credit Used : REQ on AD : Number of times a VN1 credit was used on the WB message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers. : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_CREDITS_USED.SNP",
      EventDef::Encoding{.code = 0x5c, .umask = 0x02, .msr_values = {0x00}},
      R"(VN1 Credit Used : SNP on AD)",
      R"(VN1 Credit Used : SNP on AD : Number of times a VN1 credit was used on the WB message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers. : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_CREDITS_USED.RSP",
      EventDef::Encoding{.code = 0x5c, .umask = 0x04, .msr_values = {0x00}},
      R"(VN1 Credit Used : RSP on AD)",
      R"(VN1 Credit Used : RSP on AD : Number of times a VN1 credit was used on the WB message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers. : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_CREDITS_USED.WB",
      EventDef::Encoding{.code = 0x5c, .umask = 0x08, .msr_values = {0x00}},
      R"(VN1 Credit Used : RSP on BL)",
      R"(VN1 Credit Used : RSP on BL : Number of times a VN1 credit was used on the WB message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers. : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_CREDITS_USED.NCB",
      EventDef::Encoding{.code = 0x5c, .umask = 0x10, .msr_values = {0x00}},
      R"(VN1 Credit Used : WB on BL)",
      R"(VN1 Credit Used : WB on BL : Number of times a VN1 credit was used on the WB message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers. : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_CREDITS_USED.NCS",
      EventDef::Encoding{.code = 0x5c, .umask = 0x20, .msr_values = {0x00}},
      R"(VN1 Credit Used : NCB on BL)",
      R"(VN1 Credit Used : NCB on BL : Number of times a VN1 credit was used on the WB message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers. : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_NO_CREDITS.REQ",
      EventDef::Encoding{.code = 0x5e, .umask = 0x01, .msr_values = {0x00}},
      R"(VN1 No Credits : REQ on AD)",
      R"(VN1 No Credits : REQ on AD : Number of Cycles there were no VN1 Credits : Home (REQ) messages on AD.  REQ is generally used to send requests, request responses, and snoop responses.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_NO_CREDITS.SNP",
      EventDef::Encoding{.code = 0x5e, .umask = 0x02, .msr_values = {0x00}},
      R"(VN1 No Credits : SNP on AD)",
      R"(VN1 No Credits : SNP on AD : Number of Cycles there were no VN1 Credits : Snoops (SNP) messages on AD.  SNP is used for outgoing snoops.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_NO_CREDITS.RSP",
      EventDef::Encoding{.code = 0x5e, .umask = 0x04, .msr_values = {0x00}},
      R"(VN1 No Credits : RSP on AD)",
      R"(VN1 No Credits : RSP on AD : Number of Cycles there were no VN1 Credits : Response (RSP) messages on AD.  RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_NO_CREDITS.WB",
      EventDef::Encoding{.code = 0x5e, .umask = 0x08, .msr_values = {0x00}},
      R"(VN1 No Credits : RSP on BL)",
      R"(VN1 No Credits : RSP on BL : Number of Cycles there were no VN1 Credits : Response (RSP) messages on BL. RSP packets are used to transmit a variety of protocol flits including grants and completions (CMP).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_NO_CREDITS.NCB",
      EventDef::Encoding{.code = 0x5e, .umask = 0x10, .msr_values = {0x00}},
      R"(VN1 No Credits : WB on BL)",
      R"(VN1 No Credits : WB on BL : Number of Cycles there were no VN1 Credits : Data Response (WB) messages on BL.  WB is generally used to transmit data with coherency.  For example, remote reads and writes, or cache to cache transfers will transmit their data using WB.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_VN1_NO_CREDITS.NCS",
      EventDef::Encoding{.code = 0x5e, .umask = 0x20, .msr_values = {0x00}},
      R"(VN1 No Credits : NCB on BL)",
      R"(VN1 No Credits : NCB on BL : Number of Cycles there were no VN1 Credits : Non-Coherent Broadcast (NCB) messages on BL.  NCB is generally used to transmit data without coherency.  For example, non-coherent read data returns.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.RT_GT_LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7e, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_GT_LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_GT_LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.RT_EQ_LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7e, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_EQ_LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_EQ_LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.RT_LT_LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7e, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_LT_LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_LT_LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.RT_GT_LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7e, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_GT_LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_GT_LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.RT_EQ_LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7e, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_EQ_LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_EQ_LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.RT_LT_LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7e, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_LT_LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.RT_LT_LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_GT_LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7e, .umask = 0x81, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_GT_LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_GT_LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_EQ_LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7e, .umask = 0x82, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_EQ_LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_EQ_LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_LT_LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7e, .umask = 0x84, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_LT_LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_LT_LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_GT_LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7e, .umask = 0x90, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_GT_LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_GT_LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_EQ_LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7e, .umask = 0xa0, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_EQ_LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_EQ_LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_LT_LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7e, .umask = 0xc0, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_LT_LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_OCC_COMPARE.BOTHNONZERO_RT_LT_LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.LOCALDEST_VN0",
      EventDef::Encoding{.code = 0x7d, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.LOCALDEST_VN0)",
      R"(UNC_M3UPI_WB_PENDING.LOCALDEST_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.ROUTETHRU_VN0",
      EventDef::Encoding{.code = 0x7d, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.ROUTETHRU_VN0)",
      R"(UNC_M3UPI_WB_PENDING.ROUTETHRU_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.LOCAL_AND_RT_VN0",
      EventDef::Encoding{.code = 0x7d, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.LOCAL_AND_RT_VN0)",
      R"(UNC_M3UPI_WB_PENDING.LOCAL_AND_RT_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.WAITING4PULL_VN0",
      EventDef::Encoding{.code = 0x7d, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.WAITING4PULL_VN0)",
      R"(UNC_M3UPI_WB_PENDING.WAITING4PULL_VN0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.LOCALDEST_VN1",
      EventDef::Encoding{.code = 0x7d, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.LOCALDEST_VN1)",
      R"(UNC_M3UPI_WB_PENDING.LOCALDEST_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.ROUTETHRU_VN1",
      EventDef::Encoding{.code = 0x7d, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.ROUTETHRU_VN1)",
      R"(UNC_M3UPI_WB_PENDING.ROUTETHRU_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.LOCAL_AND_RT_VN1",
      EventDef::Encoding{.code = 0x7d, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.LOCAL_AND_RT_VN1)",
      R"(UNC_M3UPI_WB_PENDING.LOCAL_AND_RT_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_WB_PENDING.WAITING4PULL_VN1",
      EventDef::Encoding{.code = 0x7d, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_M3UPI_WB_PENDING.WAITING4PULL_VN1)",
      R"(UNC_M3UPI_WB_PENDING.WAITING4PULL_VN1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.ARRIVED",
      EventDef::Encoding{.code = 0x61, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.ARRIVED)",
      R"(: xpt prefetch message arrived in ingress pipeline)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.BYPASS",
      EventDef::Encoding{.code = 0x61, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.BYPASS)",
      R"(: xpt prefetch message took bypass path)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.ARB",
      EventDef::Encoding{.code = 0x61, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.ARB)",
      R"(: xpt prefetch message is making arbitration request)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.LOST_ARB",
      EventDef::Encoding{.code = 0x61, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.LOST_ARB)",
      R"(: xpt prefetch message lost arbitration)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.FLITTED",
      EventDef::Encoding{.code = 0x61, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.FLITTED)",
      R"(: xpt prefetch message was slotted into flit (non bypass))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.LOST_OLD",
      EventDef::Encoding{.code = 0x61, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.LOST_OLD)",
      R"(: xpt prefetch message was dropped because it became too old)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_XPT_PFTCH.LOST_QFULL",
      EventDef::Encoding{.code = 0x61, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_M3UPI_XPT_PFTCH.LOST_QFULL)",
      R"(: xpt prefetch message was dropped because it was overwritten by new message while prefetch queue was full)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AK_FLQ_INSERTS",
      EventDef::Encoding{.code = 0x2f, .umask = 0x00, .msr_values = {0x00}},
      R"(AK Flow Q Inserts)",
      R"(AK Flow Q Inserts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AK_FLQ_OCCUPANCY",
      EventDef::Encoding{.code = 0x1e, .umask = 0x00, .msr_values = {0x00}},
      R"(AK Flow Q Occupancy)",
      R"(AK Flow Q Occupancy)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.IIO1_NCB",
      EventDef::Encoding{.code = 0x23, .umask = 0x01, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : IIO0 and IIO1 share the same ring destination. (1 VN0 credit only))",
      R"(M2 BL Credits Empty : IIO0 and IIO1 share the same ring destination. (1 VN0 credit only) : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_M2_BL_CREDITS_EMPTY.UBOX_NCB",
      EventDef::Encoding{.code = 0x23, .umask = 0x20, .msr_values = {0x00}},
      R"(M2 BL Credits Empty : IIO5)",
      R"(M2 BL Credits Empty : IIO5 : No vn0 and vna credits available to send to M2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WBMTOE",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WBEFtoEs issued by an IA Core.  Non Modified Write Backs)",
      R"(WbEFtoEs issued by iA Cores .  (Non Modified Write Backs)  :Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.  Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WBEFTOI",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WBEFtoEs issued by an IA Core.  Non Modified Write Backs)",
      R"(WbEFtoEs issued by iA Cores .  (Non Modified Write Backs)  :Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.  Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_WBSTOI",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Inserts : WBEFtoEs issued by an IA Core.  Non Modified Write Backs)",
      R"(WbEFtoEs issued by iA Cores .  (Non Modified Write Backs)  :Counts the number of entries successfully inserted into the TOR that match qualifications specified by the subevent.  Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.IO_MESF",
      EventDef::Encoding{.code = 0x37, .umask = 0x1f, .msr_values = {0x00}},
      R"(All LLC lines in any state that are victimized on a fill from an IO device)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.IO_E",
      EventDef::Encoding{.code = 0x37, .umask = 0x12, .msr_values = {0x00}},
      R"(All LLC lines in E state that are victimized on a fill from an IO device)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.IO_FS",
      EventDef::Encoding{.code = 0x37, .umask = 0x1c, .msr_values = {0x00}},
      R"(All LLC lines in F or S state that are victimized on a fill from an IO device)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_VICTIMS.IO_M",
      EventDef::Encoding{.code = 0x37, .umask = 0x11, .msr_values = {0x00}},
      R"(All LLC lines in M state that are victimized on a fill from an IO device)",
      R"(Counts the number of lines that were victimized on a fill.  This can be filtered by the state that the line was in.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.MEM_READ.ALL_PARTS",
      EventDef::Encoding{.code = 0x83, .umask = 0x04, .msr_values = {0x00}},
      R"(Read request for 4 bytes made by IIO Part0-7 to Memory)",
      R"(Read request for 4 bytes made by IIO Part0-7 to Memory)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.MEM_WRITE.ALL_PARTS",
      EventDef::Encoding{.code = 0x83, .umask = 0x01, .msr_values = {0x00}},
      R"(Write request of 4 bytes made by IIO Part0-7 to Memory)",
      R"(Write request of 4 bytes made by IIO Part0-7 to Memory)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.MEM_WRITE.ALL_PARTS",
      EventDef::Encoding{.code = 0xc0, .umask = 0x01, .msr_values = {0x00}},
      R"(Write request of 4 bytes made to IIO Part0-7 by the CPU)",
      R"(Write request of 4 bytes made to IIO Part0-7 by the CPU)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_BY_CPU.MEM_READ.ALL_PARTS",
      EventDef::Encoding{.code = 0xc0, .umask = 0x04, .msr_values = {0x00}},
      R"(Read request for 4 bytes made by the CPU to IIO Part0-7)",
      R"(Read request for 4 bytes made by the CPU to IIO Part0-7)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_DATA_REQ_OF_CPU.CMPD.ALL_PARTS",
      EventDef::Encoding{.code = 0x83, .umask = 0x80, .msr_values = {0x00}},
      R"(Data requested of the CPU : CmpD - device sending completion to CPU request)",
      R"(Data requested of the CPU : CmpD - device sending completion to CPU request : Number of DWs (4 bytes) the card requests of the main die.    Includes all requests initiated by the Card, including reads and writes. : x16 card plugged in to Lane 0/1/2/3, Or x8 card plugged in to Lane 0/1, Or x4 card is plugged in to slot 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_HCLOCKTICKS",
      EventDef::Encoding{.code = 0x01, .umask = 0x00, .msr_values = {0x00}},
      R"(IMC Clockticks at HCLK frequency)",
      R"(IMC Clockticks at HCLK frequency)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.RD",
      EventDef::Encoding{.code = 0x02, .umask = 0x11, .msr_values = {0x00}},
      R"(Activate due to read)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.WR",
      EventDef::Encoding{.code = 0x02, .umask = 0x22, .msr_values = {0x00}},
      R"(Activate due to write)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.ALL",
      EventDef::Encoding{.code = 0x02, .umask = 0xff, .msr_values = {0x00}},
      R"(Activate due to read, write, underfill, or bypass)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.RD_PCH0",
      EventDef::Encoding{.code = 0x02, .umask = 0x01, .msr_values = {0x00}},
      R"(HBM Activate Count : Activate due to Read in PCH0)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.WR_PCH0",
      EventDef::Encoding{.code = 0x02, .umask = 0x02, .msr_values = {0x00}},
      R"(HBM Activate Count : Activate due to Write in PCH0)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.UFILL_PCH0",
      EventDef::Encoding{.code = 0x02, .umask = 0x04, .msr_values = {0x00}},
      R"(HBM Activate Count)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.RD_PCH1",
      EventDef::Encoding{.code = 0x02, .umask = 0x10, .msr_values = {0x00}},
      R"(HBM Activate Count : Activate due to Read in PCH1)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.WR_PCH1",
      EventDef::Encoding{.code = 0x02, .umask = 0x20, .msr_values = {0x00}},
      R"(HBM Activate Count : Activate due to Write in PCH1)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.UFILL_PCH1",
      EventDef::Encoding{.code = 0x02, .umask = 0x40, .msr_values = {0x00}},
      R"(HBM Activate Count)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_ACT_COUNT.UFILL",
      EventDef::Encoding{.code = 0x02, .umask = 0x44, .msr_values = {0x00}},
      R"(HBM Activate Count : Underfill Read transaction on Page Empty or Page Miss)",
      R"(Counts the number of HBM Activate commands sent on this channel.  Activate commands are issued to open up a page on the HBM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.RD",
      EventDef::Encoding{.code = 0x03, .umask = 0x11, .msr_values = {0x00}},
      R"(Precharge due to read on page miss)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.WR",
      EventDef::Encoding{.code = 0x03, .umask = 0x22, .msr_values = {0x00}},
      R"(Precharge due to write on page miss)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.PGT",
      EventDef::Encoding{.code = 0x03, .umask = 0x88, .msr_values = {0x00}},
      R"(Precharge from MC page table)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.ALL",
      EventDef::Encoding{.code = 0x03, .umask = 0xff, .msr_values = {0x00}},
      R"(All precharge events)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.RD_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x01, .msr_values = {0x00}},
      R"(HBM Precharge commands. : Precharge due to read)",
      R"(Counts the number of HBM Precharge commands sent on this channel. : Precharge from read bank scheduler)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.WR_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x02, .msr_values = {0x00}},
      R"(HBM Precharge commands. : Precharge due to write)",
      R"(Counts the number of HBM Precharge commands sent on this channel. : Precharge from write bank scheduler)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.UFILL_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x04, .msr_values = {0x00}},
      R"(HBM Precharge commands.)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.PGT_PCH0",
      EventDef::Encoding{.code = 0x03, .umask = 0x08, .msr_values = {0x00}},
      R"(HBM Precharge commands. : Precharges from Page Table)",
      R"(Counts the number of HBM Precharge commands sent on this channel. : Equivalent to PAGE_EMPTY)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.RD_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x10, .msr_values = {0x00}},
      R"(HBM Precharge commands.)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.WR_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x20, .msr_values = {0x00}},
      R"(HBM Precharge commands.)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.UFILL_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x40, .msr_values = {0x00}},
      R"(HBM Precharge commands.)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.PGT_PCH1",
      EventDef::Encoding{.code = 0x03, .umask = 0x80, .msr_values = {0x00}},
      R"(HBM Precharge commands.)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_PRE_COUNT.UFILL",
      EventDef::Encoding{.code = 0x03, .umask = 0x44, .msr_values = {0x00}},
      R"(HBM Precharge commands.)",
      R"(Counts the number of HBM Precharge commands sent on this channel.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.RD_REG",
      EventDef::Encoding{.code = 0x05, .umask = 0xc1, .msr_values = {0x00}},
      R"(Regular read CAS commands issued (does not include underfills))",
      R"(Regular read CAS commands issued (does not include underfills))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.RD_UNDERFILL",
      EventDef::Encoding{.code = 0x05, .umask = 0xc4, .msr_values = {0x00}},
      R"(Underfill read CAS commands issued)",
      R"(Underfill read CAS commands issued)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.RD",
      EventDef::Encoding{.code = 0x05, .umask = 0xcf, .msr_values = {0x00}},
      R"(Read CAS commands issued (regular and underfill))",
      R"(Read CAS commands issued (regular and underfill))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.WR",
      EventDef::Encoding{.code = 0x05, .umask = 0xf0, .msr_values = {0x00}},
      R"(Write CAS commands issued)",
      R"(Write CAS commands issued)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.ALL",
      EventDef::Encoding{.code = 0x05, .umask = 0xff, .msr_values = {0x00}},
      R"(All CAS commands issued)",
      R"(All CAS commands issued)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.RD_PRE_REG",
      EventDef::Encoding{.code = 0x05, .umask = 0xc2, .msr_values = {0x00}},
      R"(Regular read CAS commands with precharge)",
      R"(Regular read CAS commands with precharge)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.RD_PRE_UNDERFILL",
      EventDef::Encoding{.code = 0x05, .umask = 0xc8, .msr_values = {0x00}},
      R"(Underfill read CAS commands with precharge)",
      R"(Underfill read CAS commands with precharge)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.WR_PRE",
      EventDef::Encoding{.code = 0x05, .umask = 0xe0, .msr_values = {0x00}},
      R"(Write CAS commands with precharge)",
      R"(Write CAS commands with precharge)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.WR_NONPRE",
      EventDef::Encoding{.code = 0x05, .umask = 0xd0, .msr_values = {0x00}},
      R"(HBM RD_CAS and WR_CAS Commands. : HBM WR_CAS commands w/o auto-pre)",
      R"(HBM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.PCH0",
      EventDef::Encoding{.code = 0x05, .umask = 0x40, .msr_values = {0x00}},
      R"(Pseudo Channel 0)",
      R"(HBM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_COUNT.PCH1",
      EventDef::Encoding{.code = 0x05, .umask = 0x80, .msr_values = {0x00}},
      R"(Pseudo Channel 1)",
      R"(HBM RD_CAS and WR_CAS Commands)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.RD_64B",
      EventDef::Encoding{.code = 0x06, .umask = 0xc1, .msr_values = {0x00}},
      R"(Read CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      R"(Read CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.RD_UFILL_64B",
      EventDef::Encoding{.code = 0x06, .umask = 0xc2, .msr_values = {0x00}},
      R"(Underfill Read CAS Command in Regular Mode (64B) in Pseudochannel 1)",
      R"(Underfill Read CAS Command in Regular Mode (64B) in Pseudochannel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.WR_64B",
      EventDef::Encoding{.code = 0x06, .umask = 0xc4, .msr_values = {0x00}},
      R"(Write CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      R"(Write CAS Command in Regular Mode (64B) in Pseudochannel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.RD_32B",
      EventDef::Encoding{.code = 0x06, .umask = 0xc8, .msr_values = {0x00}},
      R"(Read CAS Command in Interleaved Mode (32B))",
      R"(Read CAS Command in Interleaved Mode (32B))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.RD_UFILL_32B",
      EventDef::Encoding{.code = 0x06, .umask = 0xd0, .msr_values = {0x00}},
      R"(Underfill Read CAS Command in Interleaved Mode (32B))",
      R"(Underfill Read CAS Command in Interleaved Mode (32B))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.WR_32B",
      EventDef::Encoding{.code = 0x06, .umask = 0xe0, .msr_values = {0x00}},
      R"(Write CAS Command in Interleaved Mode (32B))",
      R"(Write CAS Command in Interleaved Mode (32B))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.PCH0",
      EventDef::Encoding{.code = 0x06, .umask = 0x40, .msr_values = {0x00}},
      R"(Pseudo Channel 0)",
      R"(Pseudo Channel 0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_CAS_ISSUED_REQ_LEN.PCH1",
      EventDef::Encoding{.code = 0x06, .umask = 0x80, .msr_values = {0x00}},
      R"(Pseudo Channel 1)",
      R"(Pseudo Channel 1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RPQ_INSERTS.PCH0",
      EventDef::Encoding{.code = 0x10, .umask = 0x01, .msr_values = {0x00}},
      R"(Read Pending Queue Allocations)",
      R"(Read Pending Queue Allocations: Counts the number of allocations into the Read Pending Queue.  This queue is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC.  They deallocate after the CAS command has been issued to memory.  This includes both ISOCH and non-ISOCH requests.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RPQ_INSERTS.PCH1",
      EventDef::Encoding{.code = 0x10, .umask = 0x02, .msr_values = {0x00}},
      R"(Read Pending Queue Allocations)",
      R"(Read Pending Queue Allocations: Counts the number of allocations into the Read Pending Queue.  This queue is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC.  They deallocate after the CAS command has been issued to memory.  This includes both ISOCH and non-ISOCH requests.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RDB_INSERTS",
      EventDef::Encoding{.code = 0x17, .umask = 0x03, .msr_values = {0x00}},
      R"(Counts the number of inserts into the read buffer.)",
      R"(Counts the number of inserts into the read buffer.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RDB_INSERTS.PCH0",
      EventDef::Encoding{.code = 0x17, .umask = 0x01, .msr_values = {0x00}},
      R"(Read Data Buffer Inserts)",
      R"(Read Data Buffer Inserts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RDB_INSERTS.PCH1",
      EventDef::Encoding{.code = 0x17, .umask = 0x02, .msr_values = {0x00}},
      R"(Read Data Buffer Inserts)",
      R"(Read Data Buffer Inserts)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RDB_FULL",
      EventDef::Encoding{.code = 0x19, .umask = 0x00, .msr_values = {0x00}},
      R"(Counts the number of cycles where the read buffer has greater than UMASK elements.  NOTE: Umask must be set to the maximum number of elements in the queue (24 entries for SPR).)",
      R"(Counts the number of cycles where the read buffer has greater than UMASK elements.  NOTE: Umask must be set to the maximum number of elements in the queue (24 entries for SPR).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RDB_OCCUPANCY",
      EventDef::Encoding{.code = 0x1a, .umask = 0x00, .msr_values = {0x00}},
      R"(Counts the number of elements in the read buffer per cycle.)",
      R"(Counts the number of elements in the read buffer per cycle.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_INSERTS.PCH0",
      EventDef::Encoding{.code = 0x20, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Pending Queue Allocations)",
      R"(Write Pending Queue Allocations: Counts the number of allocations into the Write Pending Queue.  This can then be used to calculate the average queuing latency (in conjunction with the WPQ occupancy count).  The WPQ is used to schedule write out to the memory controller and to track the writes.  Requests allocate into the WPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the CHA to the iMC.  They deallocate after being issued.  Write requests themselves are able to complete (from the perspective of the rest of the system) as soon they have posted to the iMC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_INSERTS.PCH1",
      EventDef::Encoding{.code = 0x20, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Pending Queue Allocations)",
      R"(Write Pending Queue Allocations: Counts the number of allocations into the Write Pending Queue.  This can then be used to calculate the average queuing latency (in conjunction with the WPQ occupancy count).  The WPQ is used to schedule write out to the memory controller and to track the writes.  Requests allocate into the WPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the CHA to the iMC.  They deallocate after being issued.  Write requests themselves are able to complete (from the perspective of the rest of the system) as soon they have posted to the iMC.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_READ_HIT.PCH0",
      EventDef::Encoding{.code = 0x23, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Write Pending Queue CAM Match: Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_READ_HIT.PCH1",
      EventDef::Encoding{.code = 0x23, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Write Pending Queue CAM Match: Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_WRITE_HIT.PCH0",
      EventDef::Encoding{.code = 0x24, .umask = 0x01, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Write Pending Queue CAM Match: Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_WRITE_HIT.PCH1",
      EventDef::Encoding{.code = 0x24, .umask = 0x02, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Write Pending Queue CAM Match: Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_HBM_PRE_ALL",
      EventDef::Encoding{.code = 0x44, .umask = 0x03, .msr_values = {0x00}},
      R"(All Precharge Commands)",
      R"(Precharge All Commands: Counts the number of times that the precharge all command was sent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_HBM_PREALL.PCH0",
      EventDef::Encoding{.code = 0x44, .umask = 0x01, .msr_values = {0x00}},
      R"(HBM Precharge All Commands)",
      R"(Counts the number of times that the precharge all command was sent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_HBM_PREALL.PCH1",
      EventDef::Encoding{.code = 0x44, .umask = 0x02, .msr_values = {0x00}},
      R"(HBM Precharge All Commands)",
      R"(Counts the number of times that the precharge all command was sent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RPQ_OCCUPANCY_PCH0",
      EventDef::Encoding{.code = 0x80, .umask = 0x00, .msr_values = {0x00}},
      R"(Read Pending Queue Occupancy)",
      R"(Read Pending Queue Occupancy: Accumulates the occupancies of the Read Pending Queue each cycle.  This can then be used to calculate both the average occupancy (in conjunction with the number of cycles not empty) and the average latency (in conjunction with the number of allocations).  The RPQ is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC. They deallocate after the CAS command has been issued to memory.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_RPQ_OCCUPANCY_PCH1",
      EventDef::Encoding{.code = 0x81, .umask = 0x00, .msr_values = {0x00}},
      R"(Read Pending Queue Occupancy)",
      R"(Read Pending Queue Occupancy: Accumulates the occupancies of the Read Pending Queue each cycle.  This can then be used to calculate both the average occupancy (in conjunction with the number of cycles not empty) and the average latency (in conjunction with the number of allocations).  The RPQ is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC. They deallocate after the CAS command has been issued to memory.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_OCCUPANCY_PCH0",
      EventDef::Encoding{.code = 0x82, .umask = 0x00, .msr_values = {0x00}},
      R"(Write Pending Queue Occupancy)",
      R"(Write Pending Queue Occupancy: Accumulates the occupancies of the Write Pending Queue each cycle.  This can then be used to calculate both the average queue occupancy (in conjunction with the number of cycles not empty) and the average latency (in conjunction with the number of allocations).  The WPQ is used to schedule write out to the memory controller and to track the writes.  Requests allocate into the WPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC.  They deallocate after being issued to memory.  Write requests themselves are able to complete (from the perspective of the rest of the system) as soon they have posted to the iMC.  This is not to be confused with actually performing the write.  Therefore, the average latency for this queue is actually not useful for deconstruction intermediate write latencies.  So, we provide filtering based on if the request has posted or not.  By using the not posted filter, we can track how long writes spent in the iMC before completions were sent to the HA.  The posted filter, on the other hand, provides information about how much queueing is actually happening in the iMC for writes before they are actually issued to memory.  High average occupancies will generally coincide with high write major mode counts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_OCCUPANCY_PCH1",
      EventDef::Encoding{.code = 0x83, .umask = 0x00, .msr_values = {0x00}},
      R"(Write Pending Queue Occupancy)",
      R"(Write Pending Queue Occupancy: Accumulates the occupancies of the Write Pending Queue each cycle.  This can then be used to calculate both the average queue occupancy (in conjunction with the number of cycles not empty) and the average latency (in conjunction with the number of allocations).  The WPQ is used to schedule write out to the memory controller and to track the writes.  Requests allocate into the WPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC.  They deallocate after being issued to memory.  Write requests themselves are able to complete (from the perspective of the rest of the system) as soon they have posted to the iMC.  This is not to be confused with actually performing the write.  Therefore, the average latency for this queue is actually not useful for deconstruction intermediate write latencies.  So, we provide filtering based on if the request has posted or not.  By using the not posted filter, we can track how long writes spent in the iMC before completions were sent to the HA.  The posted filter, on the other hand, provides information about how much queueing is actually happening in the iMC for writes before they are actually issued to memory.  High average occupancies will generally coincide with high write major mode counts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_ALLOC.NM_RD",
      EventDef::Encoding{.code = 0xd7, .umask = 0x01, .msr_values = {0x00}},
      R"(: Near Mem Read - Set)",
      R"(: Near Mem Read - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_ALLOC.NM_WR",
      EventDef::Encoding{.code = 0xd7, .umask = 0x04, .msr_values = {0x00}},
      R"(: Near Mem Write - Set)",
      R"(: Near Mem Write - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_OCC.NM_RD",
      EventDef::Encoding{.code = 0xd8, .umask = 0x01, .msr_values = {0x00}},
      R"(: Near Mem Read)",
      R"(: Near Mem Read)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_OCC.FM_RD",
      EventDef::Encoding{.code = 0xd8, .umask = 0x02, .msr_values = {0x00}},
      R"(: Far Mem Read)",
      R"(: Far Mem Read)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_OCC.NM_WR",
      EventDef::Encoding{.code = 0xd8, .umask = 0x04, .msr_values = {0x00}},
      R"(: Near Mem Write)",
      R"(: Near Mem Write)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_OCC.FM_WR",
      EventDef::Encoding{.code = 0xd8, .umask = 0x08, .msr_values = {0x00}},
      R"(: Far Mem Write)",
      R"(: Far Mem Write)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_OCC.FM_TGR",
      EventDef::Encoding{.code = 0xd8, .umask = 0x10, .msr_values = {0x00}},
      R"(: Near Mem Read - Clear)",
      R"(: Near Mem Read - Clear)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.NM_RD_STARVED",
      EventDef::Encoding{.code = 0xd9, .umask = 0x08, .msr_values = {0x00}},
      R"(: Valid)",
      R"(: Valid)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.NM_WR_STARVED",
      EventDef::Encoding{.code = 0xd9, .umask = 0x10, .msr_values = {0x00}},
      R"(: Near Mem Read Starved)",
      R"(: Near Mem Read Starved)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.FM_RD_STARVED",
      EventDef::Encoding{.code = 0xd9, .umask = 0x20, .msr_values = {0x00}},
      R"(: Near Mem Write Starved)",
      R"(: Near Mem Write Starved)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.FM_WR_STARVED",
      EventDef::Encoding{.code = 0xd9, .umask = 0x40, .msr_values = {0x00}},
      R"(: Far Mem Read Starved)",
      R"(: Far Mem Read Starved)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_CANARY.FM_TGR_WR_STARVED",
      EventDef::Encoding{.code = 0xd9, .umask = 0x80, .msr_values = {0x00}},
      R"(: Far Mem Write Starved)",
      R"(: Far Mem Write Starved)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_DEALLOC.NM_RD",
      EventDef::Encoding{.code = 0xde, .umask = 0x01, .msr_values = {0x00}},
      R"(: Near Mem Read - Set)",
      R"(: Near Mem Read - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_DEALLOC.FM_RD",
      EventDef::Encoding{.code = 0xde, .umask = 0x02, .msr_values = {0x00}},
      R"(: Far Mem Read - Set)",
      R"(: Far Mem Read - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_DEALLOC.NM_WR",
      EventDef::Encoding{.code = 0xde, .umask = 0x04, .msr_values = {0x00}},
      R"(: Near Mem Write - Set)",
      R"(: Near Mem Write - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_DEALLOC.FM_WR",
      EventDef::Encoding{.code = 0xde, .umask = 0x08, .msr_values = {0x00}},
      R"(: Far Mem Write - Set)",
      R"(: Far Mem Write - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_DEALLOC.FM_TGR",
      EventDef::Encoding{.code = 0xde, .umask = 0x10, .msr_values = {0x00}},
      R"(: Near Mem Read - Clear)",
      R"(: Near Mem Read - Clear)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_PREF_OCCUPANCY.DDR",
      EventDef::Encoding{.code = 0xdb, .umask = 0x02, .msr_values = {0x00}},
      R"(Scoreboard Prefetch Occupancy : DDR4)",
      R"(Scoreboard Prefetch Occupancy : DDR4)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_ALLOC.FM_RD",
      EventDef::Encoding{.code = 0xd7, .umask = 0x02, .msr_values = {0x00}},
      R"(: Far Mem Read - Set)",
      R"(: Far Mem Read - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_ALLOC.FM_WR",
      EventDef::Encoding{.code = 0xd7, .umask = 0x08, .msr_values = {0x00}},
      R"(: Far Mem Write - Set)",
      R"(: Far Mem Write - Set)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_STRV_ALLOC.FM_TGR",
      EventDef::Encoding{.code = 0xd7, .umask = 0x10, .msr_values = {0x00}},
      R"(: Near Mem Read - Clear)",
      R"(: Near Mem Read - Clear)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_LLC_LOOKUP.COREPREF_OR_DMND_LOCAL_F",
      EventDef::Encoding{.code = 0x34, .umask = 0x00, .msr_values = {0x00}},
      R"(Cache Lookups : Local non-prefetch requests)",
      R"(Cache Lookups : Local non-prefetch requests : Counts the number of times the LLC was accessed - this includes code, data, prefetches and hints coming from L2.  This has numerous filters available.  Note the non-standard filtering equation.  This event will count requests that lookup the cache multiple times with multiple increments.  One must ALWAYS set umask bit 0 and select a state or states to match.  Otherwise, the event will count nothing. : Any local transaction to the LLC, not including prefetch)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.SLPWC_1G_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x04, .msr_values = {0x00}},
      R"(: PWC Hit to a 2M page)",
      R"(: PWC Hit to a 2M page : Counts each time a transaction's first look up hits the SLPWC at the 2M level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.SLPWC_256T_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x10, .msr_values = {0x00}},
      R"(: PWC Hit to a 2M page)",
      R"(: PWC Hit to a 2M page : Counts each time a transaction's first look up hits the SLPWC at the 2M level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU1.SLPWC_512G_HITS",
      EventDef::Encoding{.code = 0x41, .umask = 0x08, .msr_values = {0x00}},
      R"(: PWC Hit to a 1G page)",
      R"(: PWC Hit to a 1G page : Counts each time a transaction's first look up hits the SLPWC at the 1G level)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_iio,
      "UNC_IIO_IOMMU3.PWT_OCCUPANCY_MSB",
      EventDef::Encoding{.code = 0x43, .umask = 0x01, .msr_values = {0x00}},
      R"(: Global IOTLB invalidation cycles)",
      R"(: Global IOTLB invalidation cycles : Indicates that IOMMU is doing global invalidation.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_NOT_TAKEN_DIRSTATE.EGRESS",
      EventDef::Encoding{.code = 0x1A, .umask = 0x01, .msr_values = {0x00}},
      R"(Cycles when Direct2UPI was Disabled : Egress Ignored D2U)",
      R"(Cycles when Direct2UPI was Disabled : Egress Ignored D2U : Counts the number of time D2K was not honoured by egress due to directory state constraints)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_NOT_TAKEN_DIRSTATE.NON_CISGRESS",
      EventDef::Encoding{.code = 0x1A, .umask = 0x02, .msr_values = {0x00}},
      R"(Cycles when Direct2UPI was Disabled : Non Cisgress D2U Ignored)",
      R"(Cycles when Direct2UPI was Disabled : Non Cisgress D2U Ignored : Counts non cisgress d2K that was not honored due to directory constraints)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_DIRECT2UPI_NOT_TAKEN_DIRSTATE.CISGRESS",
      EventDef::Encoding{.code = 0x1A, .umask = 0x04, .msr_values = {0x00}},
      R"(Cycles when Direct2UPI was Disabled : Cisgress D2U Ignored)",
      R"(Cycles when Direct2UPI was Disabled : Cisgress D2U Ignored : Counts cisgress d2K that was not honored due to directory constraints)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_NORMAL",
      EventDef::Encoding{.code = 0x24, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_NORMAL)",
      R"(UNC_M2M_IMC_READS.CH0_NORMAL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_ALL",
      EventDef::Encoding{.code = 0x24, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_ALL)",
      R"(UNC_M2M_IMC_READS.CH0_ALL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_TO_PMM",
      EventDef::Encoding{.code = 0x24, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_TO_PMM)",
      R"(UNC_M2M_IMC_READS.CH0_TO_PMM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_NORMAL",
      EventDef::Encoding{.code = 0x24, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_NORMAL)",
      R"(UNC_M2M_IMC_READS.CH1_NORMAL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_ALL",
      EventDef::Encoding{.code = 0x24, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_ALL)",
      R"(UNC_M2M_IMC_READS.CH1_ALL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_TO_PMM",
      EventDef::Encoding{.code = 0x24, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_TO_PMM)",
      R"(UNC_M2M_IMC_READS.CH1_TO_PMM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_FULL",
      EventDef::Encoding{.code = 0x25, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_WRITES.CH0_FULL)",
      R"(UNC_M2M_IMC_WRITES.CH0_FULL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_PARTIAL",
      EventDef::Encoding{.code = 0x25, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_WRITES.CH0_PARTIAL)",
      R"(UNC_M2M_IMC_WRITES.CH0_PARTIAL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_ALL",
      EventDef::Encoding{.code = 0x25, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_WRITES.CH0_ALL)",
      R"(UNC_M2M_IMC_WRITES.CH0_ALL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_TO_PMM",
      EventDef::Encoding{.code = 0x25, .umask = 0x80, .msr_values = {0x00}},
      R"(PMM - Ch0)",
      R"(PMM - Ch0 : Counts all PMM dimm writes requests(full line and partial) sent from M2M to iMC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_FULL",
      EventDef::Encoding{.code = 0x25, .umask = 0x01, .msr_values = {0x00}},
      R"(Full Line Non-ISOCH - Ch1)",
      R"(Full Line Non-ISOCH - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_PARTIAL",
      EventDef::Encoding{.code = 0x25, .umask = 0x02, .msr_values = {0x00}},
      R"(Partial Non-ISOCH - Ch1)",
      R"(Partial Non-ISOCH - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_ALL",
      EventDef::Encoding{.code = 0x25, .umask = 0x10, .msr_values = {0x00}},
      R"(All Writes - Ch1)",
      R"(All Writes - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_TO_PMM",
      EventDef::Encoding{.code = 0x25, .umask = 0x80, .msr_values = {0x00}},
      R"(PMM - Ch1)",
      R"(PMM - Ch1 : Counts all PMM dimm writes requests(full line and partial) sent from M2M to iMC)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IGR_STARVE_WINNER.MASK7",
      EventDef::Encoding{.code = 0x44, .umask = 0x80, .msr_values = {0x00}},
      R"(Count when Starve Glocab counter is at 7)",
      R"(Count when Starve Glocab counter is at 7)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_DRDPTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRdPte issued by iA Cores due to a page walk)",
      R"(TOR Occupancy : DRdPte issued by iA Cores due to a page walk : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_HIT_DRDPTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRdPte issued by iA Cores due to a page walk that hit the LLC)",
      R"(TOR Occupancy : DRdPte issued by iA Cores due to a page walk that hit the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRDPTE",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy : DRdPte issued by iA Cores due to a page walk that missed the LLC)",
      R"(TOR Occupancy : DRdPte issued by iA Cores due to a page walk that missed the LLC : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IO_ITOMCACHENEAR",
      EventDef::Encoding{.code = 0x36, .umask = 0x04, .msr_values = {0x00}},
      R"(TOR Occupancy : ItoMCacheNears, indicating a partial write request, from IO Devices)",
      R"(TOR Occupancy : ItoMCacheNears, indicating a partial write request, from IO Devices : For each cycle, this event accumulates the number of valid entries in the TOR that match qualifications specified by the subevent.     Does not include addressless requests such as locks and interrupts.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_WPQ_READ_HIT",
      EventDef::Encoding{.code = 0x23, .umask = 0x00, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_WPQ_WRITE_HIT",
      EventDef::Encoding{.code = 0x24, .umask = 0x00, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_imc,
      "UNC_M_SB_PREF_OCCUPANCY.PMM",
      EventDef::Encoding{.code = 0xDB, .umask = 0x04, .msr_values = {0x00}},
      R"(Scoreboard Prefetch Occupancy : Persistent Mem)",
      R"(Scoreboard Prefetch Occupancy : Persistent Mem)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_TxC_CYCLES_NE.PMM_DISTRESS_1",
      EventDef::Encoding{.code = 0x23, .umask = 0x08, .msr_values = {0x00}},
      R"(Egress (to CMS) Cycles Not Empty)",
      R"(Egress (to CMS) Cycles Not Empty : Counts the number of cycles when the M2PCIe Egress is not empty.  This tracks messages for one of the two CMS ports that are used by the M2PCIe agent.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple egress buffers can be tracked at a given time using multiple counters.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_TxC_CYCLES_NE.PMM_DISTRESS_0",
      EventDef::Encoding{.code = 0x23, .umask = 0x80, .msr_values = {0x00}},
      R"(Egress (to CMS) Cycles Not Empty)",
      R"(Egress (to CMS) Cycles Not Empty : Counts the number of cycles when the M2PCIe Egress is not empty.  This tracks messages for one of the two CMS ports that are used by the M2PCIe agent.  This can be used in conjunction with the M2PCIe Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple egress buffers can be tracked at a given time using multiple counters.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_TxC_CYCLES_FULL.PMM_BLOCK_1",
      EventDef::Encoding{.code = 0x25, .umask = 0x08, .msr_values = {0x00}},
      R"(Egress (to CMS) Cycles Full)",
      R"(Egress (to CMS) Cycles Full : Counts the number of cycles when the M2PCIe Egress is full.  This tracks messages for one of the two CMS ports that are used by the M2PCIe agent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2pcie,
      "UNC_M2P_TxC_CYCLES_FULL.PMM_BLOCK_0",
      EventDef::Encoding{.code = 0x25, .umask = 0x80, .msr_values = {0x00}},
      R"(Egress (to CMS) Cycles Full)",
      R"(Egress (to CMS) Cycles Full : Counts the number of cycles when the M2PCIe Egress is full.  This tracks messages for one of the two CMS ports that are used by the M2PCIe agent.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m3upi,
      "UNC_M3UPI_TxC_AD_FLQ_BYPASS",
      EventDef::Encoding{.code = 0x2C, .umask = 0x00, .msr_values = {0x00}},
      R"(AD FlowQ Bypass)",
      R"(Counts cases when the AD flowQ is bypassed (S0, S1 and S2 indicate which slot was bypassed with S0 having the highest priority and S2 the least))",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.SLOT0",
      EventDef::Encoding{.code = 0x4A, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.SLOT0)",
      R"(UNC_UPI_TxL_ANY_FLITS.SLOT0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.SLOT1",
      EventDef::Encoding{.code = 0x4A, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.SLOT1)",
      R"(UNC_UPI_TxL_ANY_FLITS.SLOT1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.SLOT2",
      EventDef::Encoding{.code = 0x4A, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.SLOT2)",
      R"(UNC_UPI_TxL_ANY_FLITS.SLOT2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.DATA",
      EventDef::Encoding{.code = 0x4A, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.DATA)",
      R"(UNC_UPI_TxL_ANY_FLITS.DATA)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.LLCRD",
      EventDef::Encoding{.code = 0x4A, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.LLCRD)",
      R"(UNC_UPI_TxL_ANY_FLITS.LLCRD)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.NULL",
      EventDef::Encoding{.code = 0x4A, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.NULL)",
      R"(UNC_UPI_TxL_ANY_FLITS.NULL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.LLCTRL",
      EventDef::Encoding{.code = 0x4A, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.LLCTRL)",
      R"(UNC_UPI_TxL_ANY_FLITS.LLCTRL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_ANY_FLITS.PROTHDR",
      EventDef::Encoding{.code = 0x4A, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_UPI_TxL_ANY_FLITS.PROTHDR)",
      R"(UNC_UPI_TxL_ANY_FLITS.PROTHDR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.SLOT0",
      EventDef::Encoding{.code = 0x4B, .umask = 0x01, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.SLOT0)",
      R"(UNC_UPI_RxL_ANY_FLITS.SLOT0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.SLOT1",
      EventDef::Encoding{.code = 0x4B, .umask = 0x02, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.SLOT1)",
      R"(UNC_UPI_RxL_ANY_FLITS.SLOT1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.SLOT2",
      EventDef::Encoding{.code = 0x4B, .umask = 0x04, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.SLOT2)",
      R"(UNC_UPI_RxL_ANY_FLITS.SLOT2)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.DATA",
      EventDef::Encoding{.code = 0x4B, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.DATA)",
      R"(UNC_UPI_RxL_ANY_FLITS.DATA)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.LLCRD",
      EventDef::Encoding{.code = 0x4B, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.LLCRD)",
      R"(UNC_UPI_RxL_ANY_FLITS.LLCRD)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.NULL",
      EventDef::Encoding{.code = 0x4B, .umask = 0x20, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.NULL)",
      R"(UNC_UPI_RxL_ANY_FLITS.NULL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.LLCTRL",
      EventDef::Encoding{.code = 0x4B, .umask = 0x40, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.LLCTRL)",
      R"(UNC_UPI_RxL_ANY_FLITS.LLCTRL)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_ANY_FLITS.PROTHDR",
      EventDef::Encoding{.code = 0x4B, .umask = 0x80, .msr_values = {0x00}},
      R"(UNC_UPI_RxL_ANY_FLITS.PROTHDR)",
      R"(UNC_UPI_RxL_ANY_FLITS.PROTHDR)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_RxL_CREDITS_CONSUMED_VNA",
      EventDef::Encoding{.code = 0x38, .umask = 0x00, .msr_values = {0x00}},
      R"(VNA Credit Consumed)",
      R"(Counts the number of times that an RxQ VNA credit was consumed (i.e. message uses a VNA credit for the Rx Buffer).  This includes packets that went through the RxQ and those that were bypasssed.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_RFOMORPH_CXL_ACC",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy for RFO and L2 RFO prefetches issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(TOR Occupancy for RFO and L2 RFO prefetches issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_CRDMORPH_CXL_ACC",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy for CRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(TOR Occupancy for CRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_DRDMORPH_CXL_ACC",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy for DRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(TOR Occupancy for DRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_OCCUPANCY.IA_MISS_LLCPREFCODE_CXL_ACC",
      EventDef::Encoding{.code = 0x36, .umask = 0x01, .msr_values = {0x00}},
      R"(TOR Occupancy for LLC Prefetch Code transactions issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(TOR Occupancy for LLC Prefetch Code transactions issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_RFOMORPH_CXL_ACC",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(RFO and L2 RFO prefetches issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(RFO and L2 RFO prefetches issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_CRDMORPH_CXL_ACC",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(CRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(CRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_DRDMORPH_CXL_ACC",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(DRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(DRds and equivalent opcodes issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_cha,
      "UNC_CHA_TOR_INSERTS.IA_MISS_LLCPREFCODE_CXL_ACC",
      EventDef::Encoding{.code = 0x35, .umask = 0x01, .msr_values = {0x00}},
      R"(LLC Prefetch Code transactions issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      R"(LLC Prefetch Code transactions issued from an IA core which miss the L3 and target memory in a CXL type 2 accelerator.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.ALL_PROTHDR",
      EventDef::Encoding{.code = 0x02, .umask = 0x87, .msr_values = {0x00}},
      R"(Valid Flits Sent : All Protocol Header)",
      R"(Valid Flits Sent : All ProtDDR : Shows legal flit time (hides impact of L0p and L0c).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.ALL_LLCTRL",
      EventDef::Encoding{.code = 0x02, .umask = 0x47, .msr_values = {0x00}},
      R"(Valid Flits Sent : All LLCTRL)",
      R"(Valid Flits Sent : All LLCTRL : Shows legal flit time (hides impact of L0p and L0c).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_upi,
      "UNC_UPI_TxL_FLITS.ALL_LLCRD",
      EventDef::Encoding{.code = 0x02, .umask = 0x17, .msr_values = {0x00}},
      R"(Valid Flits Sent : All LLCRD Not Empty)",
      R"(Valid Flits Sent : All Data : Shows legal flit time (hides impact of L0p and L0c).)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_TO_DDR_AS_MEM",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_TO_DDR_AS_MEM)",
      R"(UNC_M2M_IMC_READS.CH0_TO_DDR_AS_MEM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH0_TO_DDR_AS_CACHE",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH0_TO_DDR_AS_CACHE)",
      R"(UNC_M2M_IMC_READS.CH0_TO_DDR_AS_CACHE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_TO_DDR_AS_MEM",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_TO_DDR_AS_MEM)",
      R"(UNC_M2M_IMC_READS.CH1_TO_DDR_AS_MEM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.CH1_TO_DDR_AS_CACHE",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.CH1_TO_DDR_AS_CACHE)",
      R"(UNC_M2M_IMC_READS.CH1_TO_DDR_AS_CACHE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.TO_DDR_AS_MEM",
      EventDef::Encoding{.code = 0x24, .umask = 0x08, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.TO_DDR_AS_MEM)",
      R"(UNC_M2M_IMC_READS.TO_DDR_AS_MEM)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_READS.TO_DDR_AS_CACHE",
      EventDef::Encoding{.code = 0x24, .umask = 0x10, .msr_values = {0x00}},
      R"(UNC_M2M_IMC_READS.TO_DDR_AS_CACHE)",
      R"(UNC_M2M_IMC_READS.TO_DDR_AS_CACHE)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.TO_DDR_AS_MEM",
      EventDef::Encoding{.code = 0x25, .umask = 0x20, .msr_values = {0x00}},
      R"(DDR - All Channels)",
      R"(DDR - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.TO_DDR_AS_CACHE",
      EventDef::Encoding{.code = 0x25, .umask = 0x40, .msr_values = {0x00}},
      R"(DDR, acting as Cache - All Channels)",
      R"(DDR, acting as Cache - All Channels)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH0_NI",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive - Ch0)",
      R"(Non-Inclusive - Ch0)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_IMC_WRITES.CH1_NI",
      EventDef::Encoding{.code = 0x25, .umask = 0x00, .msr_values = {0x00}},
      R"(Non-Inclusive - Ch1)",
      R"(Non-Inclusive - Ch1)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_m2m,
      "UNC_M2M_PREFCAM_RxC_OCCUPANCY",
      EventDef::Encoding{.code = 0x60, .umask = 0x00, .msr_values = {0x00}},
      R"(AD Ingress (from CMS) Occupancy - Prefetches)",
      R"(AD Ingress (from CMS) Occupancy - Prefetches)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_READ_HIT",
      EventDef::Encoding{.code = 0x23, .umask = 0x00, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));

  pmu_manager.addEvent(std::make_shared<EventDef>(
      PmuType::uncore_mchbm,
      "UNC_MCHBM_WPQ_WRITE_HIT",
      EventDef::Encoding{.code = 0x24, .umask = 0x00, .msr_values = {0x00}},
      R"(Write Pending Queue CAM Match)",
      R"(Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.)",
      std::nullopt,
      std::nullopt, // ScaleUnit
      EventDef::IntelFeatures{},
      std::nullopt // Errata
      ));
}

} // namespace sapphirerapids_uncore_experimental
} // namespace facebook::hbt::perf_event::generated
