//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIStateRestoring-Protocol.h"

@class FRArticlePageViewController, FRArticleViewHeadlineContext, UIViewController;

@protocol FRArticlePageViewDataSource <UIStateRestoring>
- (UIViewController *)articlePageViewController:(FRArticlePageViewController *)arg1 viewControllerWithHeadlineContext:(FRArticleViewHeadlineContext *)arg2;
- (FRArticleViewHeadlineContext *)articlePageViewController:(FRArticlePageViewController *)arg1 headlineBeforeHeadlineContext:(FRArticleViewHeadlineContext *)arg2;
- (FRArticleViewHeadlineContext *)articlePageViewController:(FRArticlePageViewController *)arg1 headlineAfterHeadlineContext:(FRArticleViewHeadlineContext *)arg2;
- (unsigned long long)numberOfArticlesForArticlePageViewController:(FRArticlePageViewController *)arg1;
@end

