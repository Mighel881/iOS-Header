//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SGSuggestionsServiceContactsProtocol;

@interface PPContactStorage : NSObject
{
    NSObject<OS_dispatch_semaphore> *_concurrentContactQueryThrottleSem;
    NSObject<OS_dispatch_queue> *_concurrentContactQueryQueue;
    CNContactStore *_contactsStore;
    _PASLock *_diskCacheLock;
    id <SGSuggestionsServiceContactsProtocol> _foundInAppsService;
}

+ (id)defaultStorage;
- (void).cxx_destruct;
- (CDUnknownBlockType)postalAddressFilterWithQuery:(id)arg1;
- (CDUnknownBlockType)phoneFilterWithQuery:(id)arg1;
- (CDUnknownBlockType)nameFilterWithQuery:(id)arg1;
- (CDUnknownBlockType)emailFilterWithQuery:(id)arg1;
- (id)_waitForGroup:(id)arg1 results:(id)arg2 timeoutSeconds:(double)arg3;
- (id)_waitForGroup:(id)arg1 results:(id)arg2;
- (id)_joinResults:(id)arg1;
- (id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(double)arg3 error:(id *)arg4;
- (id)_init;
- (id)init;
- (void)registerContactsChangeHistoryForClient:(id)arg1;
- (_Bool)clearChangeHistoryForClient:(id)arg1 history:(id)arg2;
- (id)contactsChangeHistoryForClient:(id)arg1 error:(id *)arg2;
- (id)_changeHistoryIdentifierForClient:(id)arg1;
- (id)_allCNNameRecordsFromDiskCache:(id)arg1;
- (_Bool)_writeCNNameRecords:(id)arg1 history:(id)arg2 diskCache:(id)arg3 fullLoadFromSource:(_Bool)arg4;
- (void)_namesRecordsForAllFoundInAppsContactsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cnNameRecordsForAllContactsFromSource;
- (id)_cnNameRecordsForAllContacts;
- (id)_nameRecordFromCNContactChange:(id)arg1;
- (id)_nameRecordKeysToFetch;
- (id)contactNameRecordsWithHistory:(id)arg1 error:(id *)arg2;
- (id)allNameRecordsFromAllSources;
- (id)_contactsContactsWithPredicate:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)contactsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)_contactsPostalAddressSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)_contactsPhoneSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)_contactsEmailSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)_contactsNameSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)_contactsFullTextSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3 filter:(CDUnknownBlockType)arg4;
- (void)asyncFillResultsFromContactsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4;
- (id)_foundInAppsContactsQueryWithIdentifier:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (id)_foundInAppsContactsQueryWithTerm:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3 filter:(CDUnknownBlockType)arg4;
- (id)_foundInAppsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id *)arg3;
- (void)asyncFillResultsFromFoundInAppsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4;

@end

