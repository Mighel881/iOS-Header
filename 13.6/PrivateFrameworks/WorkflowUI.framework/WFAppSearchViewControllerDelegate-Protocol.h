//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class LSApplicationProxy, NSArray, WFAppSearchViewController;

@protocol WFAppSearchViewControllerDelegate <NSObject>
- (void)appSearchViewControllerDidCancel:(WFAppSearchViewController *)arg1;

@optional
- (void)appSearchViewController:(WFAppSearchViewController *)arg1 didFinishWithApps:(NSArray *)arg2;
- (void)appSearchViewController:(WFAppSearchViewController *)arg1 didFinishWithApp:(LSApplicationProxy *)arg2;
@end

