//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_endDate;
    unsigned long long _occurrenceCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)usesEndDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOccurrenceCount:(unsigned long long)arg1;
- (id)initWithEndDate:(id)arg1;

@end

