//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridCellStyle : NSObject <NSCopying>
{
    double _titleFirstBaselineHeight;
    double _subtitleFirstBaselineHeight;
    NSString *_titleTextStyle;
    NSString *_subtitleTextStyle;
    NSDictionary *_titleDefaultFontAttributes;
    NSDictionary *_subtitleDefaultFontAttributes;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    double _textFirstBaselineToBottom;
    double _textLastBaselineToBottom;
    long long _defaultTextAlignment;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long defaultTextAlignment; // @synthesize defaultTextAlignment=_defaultTextAlignment;
@property(nonatomic) double textLastBaselineToBottom; // @synthesize textLastBaselineToBottom=_textLastBaselineToBottom;
@property(nonatomic) double textFirstBaselineToBottom; // @synthesize textFirstBaselineToBottom=_textFirstBaselineToBottom;
@property(copy, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(copy, nonatomic) NSDictionary *subtitleDefaultFontAttributes; // @synthesize subtitleDefaultFontAttributes=_subtitleDefaultFontAttributes;
@property(copy, nonatomic) NSDictionary *titleDefaultFontAttributes; // @synthesize titleDefaultFontAttributes=_titleDefaultFontAttributes;
@property(copy, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(copy, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(nonatomic) double subtitleFirstBaselineHeight; // @synthesize subtitleFirstBaselineHeight=_subtitleFirstBaselineHeight;
@property(nonatomic) double titleFirstBaselineHeight; // @synthesize titleFirstBaselineHeight=_titleFirstBaselineHeight;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

