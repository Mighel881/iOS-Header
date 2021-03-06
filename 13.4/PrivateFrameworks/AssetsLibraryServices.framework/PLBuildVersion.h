//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLBuildVersion : NSObject
{
    NSString *_stringRepresentation;
    long long _majorBuildNumber;
    NSString *_majorBuildLetterString;
    long long _minorBuildNumber;
    NSString *_minorBuildLetterString;
}

+ (id)currentBuildVersionString;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *minorBuildLetterString; // @synthesize minorBuildLetterString=_minorBuildLetterString;
@property(readonly, nonatomic) long long minorBuildNumber; // @synthesize minorBuildNumber=_minorBuildNumber;
@property(readonly, copy, nonatomic) NSString *majorBuildLetterString; // @synthesize majorBuildLetterString=_majorBuildLetterString;
@property(readonly, nonatomic) long long majorBuildNumber; // @synthesize majorBuildNumber=_majorBuildNumber;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)description;
- (long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2;
- (long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2;
- (id)initWithString:(id)arg1;

@end

