//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate, NSSet;

@interface IGUserBootstrap : NSObject <NSCoding, NSCopying>
{
    NSDate *_expireTime;
    NSSet *_users;
    NSSet *_surfaces;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *surfaces; // @synthesize surfaces=_surfaces;
@property(readonly, nonatomic) NSSet *users; // @synthesize users=_users;
- (void)addUser:(id)arg1 withScore:(id)arg2 forSurfaceName:(id)arg3;
- (_Bool)containsSurfaceNames:(id)arg1;
@property(readonly, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsers:(id)arg1 surfaces:(id)arg2;

@end

