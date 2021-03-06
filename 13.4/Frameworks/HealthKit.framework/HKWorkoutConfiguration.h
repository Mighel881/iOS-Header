//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSUUID;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _activityType;
    long long _locationType;
    long long _swimmingLocationType;
    HKQuantity *_lapLength;
    NSUUID *_fitnessMachineSessionUUID;
    NSUUID *_predictionSessionUUID;
}

+ (id)_workoutConfigurationFromDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *predictionSessionUUID; // @synthesize predictionSessionUUID=_predictionSessionUUID;
@property(retain, nonatomic) NSUUID *fitnessMachineSessionUUID; // @synthesize fitnessMachineSessionUUID=_fitnessMachineSessionUUID;
@property(copy) HKQuantity *lapLength; // @synthesize lapLength=_lapLength;
@property long long swimmingLocationType; // @synthesize swimmingLocationType=_swimmingLocationType;
@property long long locationType; // @synthesize locationType=_locationType;
@property unsigned long long activityType; // @synthesize activityType=_activityType;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)validateAndReturnError:(id *)arg1;
- (id)init;

@end

