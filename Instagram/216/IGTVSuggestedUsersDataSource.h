//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUser, IGUserSession, NSArray, NSString;
@protocol IGTVSuggestedUsersDataSourceDelegate;

@interface IGTVSuggestedUsersDataSource : NSObject
{
    IGUserSession *_userSession;
    IGUser *_user;
    id <IGTVSuggestedUsersDataSourceDelegate> _delegate;
    long long _state;
    NSArray *_items;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <IGTVSuggestedUsersDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleFailedRequest;
- (void)_handleParsingWithResponse:(id)arg1;
- (void)fetch;
- (id)initWithUserSession:(id)arg1 user:(id)arg2;

@end
