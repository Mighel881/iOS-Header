//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCPayload, MCPayloadInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadDetailsViewController : UITableViewController <PSStateRestoration>
{
    MCPayload *_payload;
    MCPayloadInfo *_payloadInfo;
    NSArray *_keyValueSections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(retain, nonatomic) MCPayloadInfo *payloadInfo; // @synthesize payloadInfo=_payloadInfo;
@property(retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)setTitle:(id)arg1 keyValueSections:(id)arg2;
- (void)dealloc;
- (void)_setup;
- (id)initWithPayloadInfo:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

