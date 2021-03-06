//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface CarHairlineView : UIView
{
    NSLayoutConstraint *_constraint;
    long long _axis;
}

+ (void)removeHairlineViewsFromView:(id)arg1;
+ (id)hairlineViewsInView:(id)arg1;
+ (_Bool)requiresConstraintBasedLayout;
+ (id)hairlineViewAlongAxis:(long long)arg1;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (id)initWithAxis:(long long)arg1;

@end

