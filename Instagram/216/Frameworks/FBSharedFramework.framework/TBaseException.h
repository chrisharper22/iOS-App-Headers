//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSMutableCopying-Protocol.h>

@interface TBaseException : NSException <NSCopying, NSMutableCopying>
{
    _Bool _troot_is_immutable;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)throwExceptionIfImmutable;
- (_Bool)isMutable;
- (_Bool)isImmutable;
- (_Bool)makeImmutable;
- (id)init;

@end

