//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface MAIAppStoreManagerConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _allowMultiCache;
    _Bool _autoClearCacheOnEnterBackground;
}

@property(readonly, nonatomic) _Bool autoClearCacheOnEnterBackground; // @synthesize autoClearCacheOnEnterBackground=_autoClearCacheOnEnterBackground;
@property(readonly, nonatomic) _Bool allowMultiCache; // @synthesize allowMultiCache=_allowMultiCache;
- (id)initWithAllowMultiCache:(_Bool)arg1 autoClearCacheOnEnterBackground:(_Bool)arg2;

@end

