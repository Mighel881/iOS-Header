//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, RTPredictionItemMO, RTPredictionTableMO;

@interface RTPredictionTableEntryMO : NSManagedObject
{
}

+ (id)managedObjectWithItem:(id)arg1 conditions:(id)arg2 inManagedObjectContext:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSSet *conditions; // @dynamic conditions;
@property(retain, nonatomic) RTPredictionItemMO *item; // @dynamic item;
@property(retain, nonatomic) RTPredictionTableMO *predictionTable; // @dynamic predictionTable;

@end

