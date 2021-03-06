//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRArticleBarButtonItemManager, UIBarButtonItem;

@protocol FRArticleBarButtonItemManagerDelegate <NSObject>
- (_Bool)articleBarButtonItemManagerShouldShowChrome:(FRArticleBarButtonItemManager *)arg1;
- (_Bool)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performDisLikeActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (_Bool)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performLikeActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performTextResizingActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performShareActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performBackActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1 performNextActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (_Bool)shouldEnableShowLessButtonForArticleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1;
- (_Bool)shouldEnableShowMoreButtonForArticleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1;
- (_Bool)shouldEnableBackButtonForArticleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1;
- (_Bool)shouldEnableNextButtonForArticleBarButtonItemManager:(FRArticleBarButtonItemManager *)arg1;
@end

