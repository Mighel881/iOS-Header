//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, UITextView;

@interface _CARLearnMoreViewController : UIViewController
{
    NSString *_resourcePath;
    UITextView *_textView;
    NSLayoutConstraint *_bottomMarginConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)_configureLearnMoreView;
- (id)initWithContentsOfResource:(id)arg1 ofType:(id)arg2;

@end

