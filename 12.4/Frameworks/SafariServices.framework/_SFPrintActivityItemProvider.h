//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFActivityItemProvider.h>

@class UIPrintPageRenderer, _SFPrintController;

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider
{
    UIPrintPageRenderer *_printPageRenderer;
    _Bool _hasReservedPrintInteractionController;
    _SFPrintController *_printController;
}

@property(readonly, nonatomic) _Bool hasReservedPrintInteractionController; // @synthesize hasReservedPrintInteractionController=_hasReservedPrintInteractionController;
@property(readonly, nonatomic) _SFPrintController *printController; // @synthesize printController=_printController;
- (void).cxx_destruct;
- (id)item;
- (id)initWithPrintController:(id)arg1 webView:(id)arg2;

@end

