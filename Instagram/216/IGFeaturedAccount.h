//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUser, NSString, NSURL;

@interface IGFeaturedAccount : NSObject
{
    _Bool _isFeatured;
    IGUser *_user;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFeatured; // @synthesize isFeatured=_isFeatured;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSURL *profilePicURL;
@property(readonly, nonatomic) NSString *pk;
@property(readonly, nonatomic) NSString *username;
- (id)initWithUser:(id)arg1 isFeatured:(_Bool)arg2;

@end

