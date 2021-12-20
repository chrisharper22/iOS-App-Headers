//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSSOToken, IGSSOUser;

@interface IGSSOLoginAccount : NSObject
{
    IGSSOToken *_token;
    IGSSOUser *_user;
    unsigned long long _orderRank;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long orderRank; // @synthesize orderRank=_orderRank;
@property(readonly, nonatomic) IGSSOUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGSSOToken *token; // @synthesize token=_token;
- (id)initWithToken:(id)arg1 user:(id)arg2 orderRank:(unsigned long long)arg3;

@end
