//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAsyncTask, IGAudioPlaylist, IGStoryMusicModelsPaginatedListPage, IGUserSession, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGStoryMusicModelsPaginatedListDelegate;

@interface IGStoryMusicModelsPaginatedList : NSObject <NSCopying>
{
    IGStoryMusicModelsPaginatedListPage *_firstPage;
    IGStoryMusicModelsPaginatedListPage *_currentPage;
    IGAsyncTask *_nextPageRequest;
    IGUserSession *_userSession;
    NSMutableArray *_allModels;
    NSMutableArray *_modelsToRender;
    NSMutableDictionary *_recentSavedSubscriptionTokens;
    id <IGStoryMusicModelsPaginatedListDelegate> _delegate;
    NSString *_unavailableSongsMessage;
    long long _filteredTypes;
    IGAudioPlaylist *_suggestedAudioPlaylist;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAudioPlaylist *suggestedAudioPlaylist; // @synthesize suggestedAudioPlaylist=_suggestedAudioPlaylist;
@property(nonatomic) long long filteredTypes; // @synthesize filteredTypes=_filteredTypes;
@property(retain, nonatomic) NSString *unavailableSongsMessage; // @synthesize unavailableSongsMessage=_unavailableSongsMessage;
@property(nonatomic) __weak id <IGStoryMusicModelsPaginatedListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didLoadNextPage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSMutableArray *loadedMusicModels;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (void)removeModel:(id)arg1;
- (unsigned long long)_indexOfRecentSaved;
- (unsigned long long)_indexOfForYouHeader;
- (void)_setupSubscriptionsForUnsavingObjects:(id)arg1;
- (void)_removeRecentSaveSectionIfEmpty;
- (void)addRecentSaveSectionModels:(id)arg1;
- (void)updatePlaylist:(id)arg1;
- (void)addModelAtBeginningOfRecents:(id)arg1;
- (void)addModelInFront:(id)arg1;
- (void)addModel:(id)arg1;
- (_Bool)shouldLoadNextPage:(unsigned long long)arg1;
- (void)loadNextPage;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasLoadedAllData;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithUserSession:(id)arg1 firstPage:(id)arg2;

@end

