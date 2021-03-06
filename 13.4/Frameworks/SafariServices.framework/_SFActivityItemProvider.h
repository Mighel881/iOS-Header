//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSSet, NSString, NSURL, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider
{
    NSURL *_url;
    NSString *_pageTitle;
    NSSet *_excludedActivityTypes;
    CDUnknownBlockType _thumbnailHandler;
    WKWebView *_webView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType thumbnailHandler; // @synthesize thumbnailHandler=_thumbnailHandler;
@property(copy, nonatomic) NSSet *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (void)main;
- (id)item;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;
- (id)initWithPlaceholderItem:(id)arg1;

@end

