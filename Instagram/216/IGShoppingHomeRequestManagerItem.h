//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRequestManagementItemType-Protocol.h"

@class IGMedia, NSArray, NSString;

@interface IGShoppingHomeRequestManagerItem : NSObject <IGRequestManagementItemType>
{
    NSArray *_mediaForPrefetch;
    IGMedia *_media;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(copy, nonatomic) NSArray *mediaForPrefetch; // @synthesize mediaForPrefetch=_mediaForPrefetch;
- (id)initWithMedia:(id)arg1 mediaForPrefetch:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
