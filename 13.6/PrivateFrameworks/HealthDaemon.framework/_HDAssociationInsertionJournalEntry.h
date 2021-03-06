//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSData, NSUUID;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry
{
    _Bool _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    long long _provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enforceSameSource; // @synthesize enforceSameSource=_enforceSameSource;
@property(readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) NSData *childUUIDsData; // @synthesize childUUIDsData=_childUUIDsData;
@property(readonly, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(_Bool)arg4;

@end

