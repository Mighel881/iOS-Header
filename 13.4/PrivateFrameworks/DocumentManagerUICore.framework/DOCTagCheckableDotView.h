//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, DOCTagDotView;

@interface DOCTagCheckableDotView : UIView
{
    _Bool _checked;
    DOCTagDotView *_tagDotView;
    CAShapeLayer *_borderLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) DOCTagDotView *tagDotView; // @synthesize tagDotView=_tagDotView;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void)updateLayoutOfLayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long tagColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

