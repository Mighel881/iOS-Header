//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ReminderKitUI/REMReminderCreationPublicViewController-Protocol.h>

@class NSError, REMReminderCreationRemoteViewController, _UIResilientRemoteViewContainerViewController;
@protocol REMReminderCreationDelegate, REMReminderCreationViewServiceViewController;

@interface REMReminderCreationViewController : UIViewController <REMReminderCreationPublicViewController>
{
    _UIResilientRemoteViewContainerViewController *_childViewController;
    id <REMReminderCreationDelegate> _delegate;
    NSError *_deferredErrorDuringPresentation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *deferredErrorDuringPresentation; // @synthesize deferredErrorDuringPresentation=_deferredErrorDuringPresentation;
@property(readonly, nonatomic) id <REMReminderCreationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)viewServiceDidFinish;
- (void)viewServiceDidFailWithError:(id)arg1;
- (void)viewServiceDidCancel;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=remoteViewController) REMReminderCreationRemoteViewController *remoteViewController;
@property(readonly, nonatomic, getter=viewServiceViewController) id <REMReminderCreationViewServiceViewController> viewServiceViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

