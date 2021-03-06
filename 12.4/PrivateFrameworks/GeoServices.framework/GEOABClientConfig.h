//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABClientConfig : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_assignedAbBranchId;
    NSMutableArray *_configKeyValues;
    NSMutableArray *_debugExperimentBranchs;
}

+ (Class)debugExperimentBranchType;
+ (Class)configKeyValueType;
@property(retain, nonatomic) NSMutableArray *debugExperimentBranchs; // @synthesize debugExperimentBranchs=_debugExperimentBranchs;
@property(retain, nonatomic) NSString *assignedAbBranchId; // @synthesize assignedAbBranchId=_assignedAbBranchId;
@property(retain, nonatomic) NSMutableArray *configKeyValues; // @synthesize configKeyValues=_configKeyValues;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)debugExperimentBranchAtIndex:(unsigned long long)arg1;
- (unsigned long long)debugExperimentBranchsCount;
- (void)addDebugExperimentBranch:(id)arg1;
- (void)clearDebugExperimentBranchs;
@property(readonly, nonatomic) _Bool hasAssignedAbBranchId;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)configKeyValuesCount;
- (void)addConfigKeyValue:(id)arg1;
- (void)clearConfigKeyValues;

@end

