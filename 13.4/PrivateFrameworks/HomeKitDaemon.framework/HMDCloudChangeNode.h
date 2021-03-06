//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudChange, NSMapTable, NSString, NSUUID;

@interface HMDCloudChangeNode : HMFObject
{
    _Bool _forceDelete;
    _Bool _orphaned;
    NSString *_recordName;
    NSUUID *_uuid;
    NSUUID *_parentUuid;
    NSString *_type;
    HMDCloudChangeNode *_parent;
    HMDCloudChange *_change;
    NSMapTable *_children;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *children; // @synthesize children=_children;
@property(retain, nonatomic) HMDCloudChange *change; // @synthesize change=_change;
@property(nonatomic) __weak HMDCloudChangeNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) _Bool orphaned; // @synthesize orphaned=_orphaned;
@property(readonly, nonatomic) _Bool forceDelete; // @synthesize forceDelete=_forceDelete;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
- (void)_markBranchOrphaned;
- (id)_allNodesInBranch;
- (void)deleteChildren;
- (void)_updateWithCloudRecord:(id)arg1;
- (void)_updateWithChange:(id)arg1;
- (void)_updateWithModel:(id)arg1;
- (void)updateRecordMapping:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)logChangeTreeWithIndent:(id)arg1;
- (id)description;
- (id)shortDescription;
- (id)initWithCloudRecord:(id)arg1;
- (id)initWithChange:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithRecordMapping:(id)arg1;
- (id)_initWithUUID:(id)arg1 parentUUID:(id)arg2 recordName:(id)arg3 type:(id)arg4 change:(id)arg5;
- (id)init;

@end

