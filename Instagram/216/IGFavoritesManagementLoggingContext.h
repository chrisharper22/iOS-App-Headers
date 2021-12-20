//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface IGFavoritesManagementLoggingContext : NSObject
{
    long long _entryPoint;
    NSString *_analyticsModule;
    long long _initialFavoritesCount;
    NSSet *_initialFavoritesUsers;
    NSMutableSet *_searchAddedUsers;
    NSMutableSet *_suggestionsAddedUsers;
    long long _suggestionsAvailableCount;
    long long _suggestionsMaxSeenPosition;
    _Bool _removeAllTapped;
    _Bool _removeAllTappedInDialog;
    _Bool _undoRemoveAllTapped;
}

- (void).cxx_destruct;
- (void)logWaterfallWithFinalFavoritesUsers:(id)arg1 exitPoint:(long long)arg2 analyticsLogger:(id)arg3;
- (void)notifyUndoRemoveAllTapped;
- (void)notifyRemoveAllTappedInDialog;
- (void)notifyRemoveAllTapped;
- (void)notifySuggestionSeenPosition:(long long)arg1;
- (void)notifySuggestionsAvailableCount:(long long)arg1;
- (void)notifySuggestionUserAdded:(id)arg1;
- (void)notifySearchUserAdded:(id)arg1;
- (void)notifyInitialFavoritesUsers:(id)arg1;
- (void)notifyInitialFavoritesCount:(long long)arg1;
- (id)initWithEntryPoint:(long long)arg1 analyticsModule:(id)arg2;

@end
