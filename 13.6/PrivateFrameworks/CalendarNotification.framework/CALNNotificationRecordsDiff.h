//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CALNNotificationRecordsDiff : NSObject
{
    NSArray *_addedRecords;
    NSArray *_removedRecords;
    NSArray *_modifiedRecords;
}

+ (id)emptyDiff;
+ (id)diffWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *modifiedRecords; // @synthesize modifiedRecords=_modifiedRecords;
@property(readonly, copy, nonatomic) NSArray *removedRecords; // @synthesize removedRecords=_removedRecords;
@property(readonly, copy, nonatomic) NSArray *addedRecords; // @synthesize addedRecords=_addedRecords;
- (id)description;
- (id)initWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3;

@end

