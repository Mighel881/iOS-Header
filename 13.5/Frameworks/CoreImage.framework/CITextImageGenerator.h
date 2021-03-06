//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CITextImageGenerator : CIFilter
{
    NSString *inputText;
    NSString *inputFontName;
    NSNumber *inputFontSize;
    NSNumber *inputScaleFactor;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) NSNumber *inputFontSize; // @synthesize inputFontSize;
@property(retain, nonatomic) NSString *inputFontName; // @synthesize inputFontName;
@property(retain, nonatomic) NSString *inputText; // @synthesize inputText;
- (id)outputImage;

@end

