//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (OCBStringAdditions)
+ (id)stringWithOcText:(const struct OcText *)arg1;
+ (id)stringWithCsString:(const struct CsString *)arg1;
- (void)copyToOcText:(struct OcText *)arg1 encoding:(int)arg2;
- (void)copyToOcText:(struct OcText *)arg1;
- (void)copyToCsString:(struct CsString *)arg1;
- (id)dataUsingWordEncoding:(int)arg1;
- (id)initWithOcText:(const struct OcText *)arg1;
- (id)initWithCsString:(const struct CsString *)arg1;
@end

