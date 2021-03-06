//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCXSTValidator : NSObject
{
    NSMutableDictionary *_simpleTypeMap;
}

+ (id)simpleType:(unsigned long long)arg1 stringValue:(id)arg2;
+ (id)simpleType:(unsigned long long)arg1 integerValue:(long long)arg2;
+ (id)validator;
+ (_Bool)isValidValue:(id)arg1 simpleType:(unsigned long long)arg2;
+ (id)validateIntegerValue:(long long)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
- (void).cxx_destruct;
- (id)simpleTypeMap;
- (id)init;

@end

