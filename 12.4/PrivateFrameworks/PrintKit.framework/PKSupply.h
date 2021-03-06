//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKSupply : NSObject
{
    int _level;
    int _lowLevel;
    int _highLevel;
    NSString *_name;
    NSString *_markerType;
    NSArray *_colors;
    unsigned long long _supplyType;
}

+ (_Bool)isValidColorString:(const char *)arg1;
+ (id)suppliesForIPPResponse:(struct _ipp_s *)arg1;
+ (unsigned long long)numRequiredIPPAttributes;
+ (const char **)requiredIPPAttributes;
@property(nonatomic) unsigned long long supplyType; // @synthesize supplyType=_supplyType;
@property(nonatomic) int highLevel; // @synthesize highLevel=_highLevel;
@property(nonatomic) int lowLevel; // @synthesize lowLevel=_lowLevel;
@property(nonatomic) int level; // @synthesize level=_level;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSString *markerType; // @synthesize markerType=_markerType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(const char *)arg1 markerType:(const char *)arg2 colors:(const char *)arg3 level:(int)arg4 lowLevel:(int)arg5 highLevel:(int)arg6;

@end

