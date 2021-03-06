//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAutocompleteAlmostAbstractDataSource-Protocol.h>
#import <FBSharedFramework/IGDirectRecipientQueryLocalSearchDataSourceProtocol-Protocol.h>
#import <FBSharedFramework/IGMediaUpdatedListener-Protocol.h>

@class IGUser, IGUserTrie, NSArray, NSString;
@protocol IGUserSearchIndex;

@interface IGUserListLocalDataSource : NSObject <IGDirectRecipientQueryLocalSearchDataSourceProtocol, IGMediaUpdatedListener, IGAutocompleteAlmostAbstractDataSource>
{
    _Bool _excludesCurrentUser;
    NSString *_query;
    NSArray *_filteredResults;
    unsigned long long _defaultSet;
    id <IGUserSearchIndex> _autocompleteUsersStore;
    IGUser *_currentUser;
    NSString *_surfaceName;
    IGUserTrie *_additionalUsers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGUserTrie *additionalUsers; // @synthesize additionalUsers=_additionalUsers;
@property(readonly, copy, nonatomic) NSString *surfaceName; // @synthesize surfaceName=_surfaceName;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) id <IGUserSearchIndex> autocompleteUsersStore; // @synthesize autocompleteUsersStore=_autocompleteUsersStore;
@property(nonatomic) _Bool excludesCurrentUser; // @synthesize excludesCurrentUser=_excludesCurrentUser;
@property(nonatomic) unsigned long long defaultSet; // @synthesize defaultSet=_defaultSet;
@property(retain, nonatomic) NSArray *filteredResults; // @synthesize filteredResults=_filteredResults;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)resultForRow:(long long)arg1;
- (id)allResults;
- (unsigned long long)numberOfResults;
- (void)filterUsersInSet:(unsigned long long)arg1 scope:(long long)arg2 query:(id)arg3;
- (CDUnknownBlockType)fullComparator:(id)arg1;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)addCommentUsersForComments:(id)arg1;
- (void)_addCommentUsersForMedia:(id)arg1;
- (void)addUsersForMedia:(id)arg1;
- (void)addUsers:(id)arg1;
- (id)initWithAutocompleteUsersStore:(id)arg1 surface:(id)arg2 currentUser:(id)arg3;
- (CDUnknownBlockType)comparatorForQueryString:(id)arg1;
- (id)localRecipients:(long long)arg1 nicknameManager:(id)arg2;
- (id)matchingRecipientsForQueryString:(id)arg1 displayNameType:(long long)arg2 nicknameManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

