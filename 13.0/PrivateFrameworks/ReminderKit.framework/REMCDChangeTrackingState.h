//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface REMCDChangeTrackingState : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(copy, nonatomic) NSString *clientName; // @dynamic clientName;
@property(retain, nonatomic) NSData *lastConsumedChangeTokenData; // @dynamic lastConsumedChangeTokenData;
@property(copy, nonatomic) NSDate *lastConsumedDate; // @dynamic lastConsumedDate;

@end

