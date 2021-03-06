//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNContactStore, NSString;
@protocol NSObject;

@interface CNDowntimeWhitelist : NSObject
{
    NSString *_primaryiCloudContainerIdentifier;
    CNContactStore *_contactStore;
    ACAccountStore *_accountStore;
    id <NSObject> _contactStoreDidChangeNotificationToken;
    id <NSObject> _accountStoreDidChangeNotificationToken;
}

+ (_Bool)isWhitelistedContact:(id)arg1;
+ (_Bool)anyContactIsWhitelisted:(id)arg1;
+ (id)keyDescriptor;
+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> accountStoreDidChangeNotificationToken; // @synthesize accountStoreDidChangeNotificationToken=_accountStoreDidChangeNotificationToken;
@property(readonly, nonatomic) id <NSObject> contactStoreDidChangeNotificationToken; // @synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NSString *primaryiCloudContainerIdentifier; // @synthesize primaryiCloudContainerIdentifier=_primaryiCloudContainerIdentifier;
- (void)setTestAcountStore:(id)arg1;
- (void)setTestPrimaryiCloudContainerIdentifier:(id)arg1;
- (id)fetchPrimaryiCloudCardDAVAccountIdentifier;
- (id)fetchPrimaryiCloudCardDAVContainerIdentifier;
- (id)identifierOfContainerSupporingDowntimeContacts;
- (id)requestForNonUnifiedContacts;
- (id)requestForContactsInPermittedContainers;
- (id)requestForContactsInPermittedContainersWithHandles:(id)arg1;
- (id)allWhitelistedContacts;
- (id)allWhitelistedHandleStrings;
- (_Bool)isHandleStringWhitelisted:(id)arg1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1;
- (void)dealloc;
- (void)beginObservingChangeNotifications;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end

