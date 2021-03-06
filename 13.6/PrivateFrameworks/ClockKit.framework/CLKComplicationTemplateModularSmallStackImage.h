//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularSmallStackImage : CLKComplicationTemplate
{
    CLKImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
    unsigned long long _highlightMode;
}

+ (struct CGSize)imageSize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKImageProvider *line1ImageProvider; // @synthesize line1ImageProvider=_line1ImageProvider;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
@property(nonatomic) _Bool highlightLine2;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

