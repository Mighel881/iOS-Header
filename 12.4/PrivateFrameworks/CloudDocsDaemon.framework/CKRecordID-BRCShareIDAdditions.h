//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

@interface CKRecordID (BRCShareIDAdditions)
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;
- (id)brc_shareItemID;
- (id)brc_shareZoneName;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithShareableItem:(id)arg1;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;
@end

