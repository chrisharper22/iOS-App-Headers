//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDiskManager, IGKeywordsBootstrap, NSOrderedSet, NSSet;

@interface IGKeywordsBootstrapStore : NSObject
{
    IGDiskManager *_diskManager;
    IGKeywordsBootstrap *_bootstrap;
    NSOrderedSet *_sortedKeywords;
}

- (void).cxx_destruct;
- (void)_readFromCache;
- (id)_bootstrapStorage;
- (_Bool)isExpired;
@property(readonly, copy, nonatomic) NSOrderedSet *sortedKeywords; // @synthesize sortedKeywords=_sortedKeywords;
@property(readonly, copy, nonatomic) NSSet *keywords;
- (void)setKeywords:(id)arg1 withExpirationDate:(id)arg2;
- (void)clearCache;
- (id)initWithDiskManager:(id)arg1;

@end

