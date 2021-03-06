//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AADataclassManager : NSObject
{
}

+ (id)appBundleIdentifierDictionary;
+ (id)sharedManager;
- (void)attemptToEnableDataclasses:(id)arg1 forAccount:(id)arg2 inStore:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldProvisionNotesForAccount:(id)arg1;
- (_Bool)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2;
- (_Bool)shouldAutoEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (_Bool)_isRunningInStoreDemoMode;
- (_Bool)_isApplicationSupportedForCurrentRegion:(id)arg1;
- (_Bool)_hideDataclassWhenAppRemoved:(id)arg1;
- (_Bool)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1;
- (_Bool)_isRestrictedForDataclass:(id)arg1;
- (id)appBundleIdentifierForDataclass:(id)arg1;
- (id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2;
- (id)_filteredDataclassesForAccountClass:(id)arg1;
- (id)_blackListedMacOSDataclasses;
- (id)_userVisibleDataclasses;
- (id)whitelistedDataclassesForAppleAccountClassFull;
- (id)whitelistedDataclassesForAppleAccountClassBasic;

@end

