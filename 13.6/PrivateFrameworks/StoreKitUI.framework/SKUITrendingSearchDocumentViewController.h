//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>

@class NSString, SKUITrendingSearchTemplateElement, SKUITrendingSearchView, UIViewController;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
    UIViewController *_privacyViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *privacyViewController; // @synthesize privacyViewController=_privacyViewController;
@property(retain, nonatomic) SKUITrendingSearchTemplateElement *template; // @synthesize template=_template;
@property(retain, nonatomic) SKUITrendingSearchView *resultsView; // @synthesize resultsView=_resultsView;
- (struct UIEdgeInsets)_resultsViewContentInset;
- (void)_reloadResultsView;
- (void)searchResultButtonTapped:(id)arg1;
- (void)resultsViewTapRecognized:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)impressionableViewElements;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

