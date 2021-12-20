//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBBusinessExtensionUserPreferenceStoring;

@interface FBBusinessExtensionAutofillMultiRecordCache : NSObject
{
    id <FBBusinessExtensionUserPreferenceStoring> _userPreferenceStore;
}

+ (id)sharedInstanceWithUserPreferenceStore:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBBusinessExtensionUserPreferenceStoring> userPreferenceStore; // @synthesize userPreferenceStore=_userPreferenceStore;
- (id)_cachedAutofillGroupsForGroupType:(id)arg1 requestedAutofillTags:(id)arg2 groupKeyFormat:(id)arg3;
- (void)_removePreferencesForGroupType:(id)arg1;
- (void)removeLocalCacheAutofillGroups;
- (void)removeLocalCacheAutofillGroup:(id)arg1;
- (_Bool)isGraphQLCacheValid;
- (id)cachedGraphQLAutofillGroupsForGroupType:(id)arg1 requestedAutofillTags:(id)arg2;
- (id)cachedLocalAutofillGroupsForGroupType:(id)arg1 requestedAutofillTags:(id)arg2;
- (void)updateGraphQLCacheForGroupType:(id)arg1 autofillGroups:(id)arg2;
- (void)updateLocalCacheFromAutofillGroup:(id)arg1 toAutofillGroup:(id)arg2;
- (void)addLocalCacheAutofillGroup:(id)arg1;

@end
