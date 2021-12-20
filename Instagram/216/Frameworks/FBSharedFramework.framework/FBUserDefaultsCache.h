//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSSet, UILocalizedIndexedCollation;
@protocol OS_dispatch_queue;

@interface FBUserDefaultsCache : NSObject
{
    NSSet *_thousandsCannotBeShortenedLanguageMap;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _dirty;
    _Bool _didUpdateSinceLastForeground;
    _Bool _abPersonCreationNeeded;
    _Bool _abPersonCreated;
    _Bool _shouldShortenThousands;
    NSCalendar *_currentCalendar;
    unsigned int _sortOrder;
    unsigned int _nameFormat;
    UILocalizedIndexedCollation *_currentCollation;
}

+ (id)sharedUserDefaultsCache;
- (void).cxx_destruct;
- (void)_sync_updateIfDirty;
- (void)_sync_createABPersonIfNeeded;
- (void)_sync_ensureAbPersonPreferencesWillBeFresh;
- (void)_onCurrentLocaleDidChange:(id)arg1;
- (void)_onDefaultsDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShortenThousands;
@property(readonly, nonatomic) __weak NSCalendar *currentCalendar;
@property(readonly, nonatomic) __weak UILocalizedIndexedCollation *currentCollation;
@property(readonly, nonatomic) unsigned int nameFormat;
@property(readonly, nonatomic) unsigned int sortOrder;
- (void)updateShouldShortenThousands;
- (void)updateShouldShortenThousandsForLocale:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (id)init;

@end

