//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataEntity.h>

@interface HDDeletedObjectEntity : HDDataEntity
{
}

+ (_Bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)requiresSampleTypePredicate;
+ (Class)baseDataEntityClass;
+ (long long)preferredEntityType;
+ (id)deletedObjectEntityForDeletedObject:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id *)arg5;

@end

