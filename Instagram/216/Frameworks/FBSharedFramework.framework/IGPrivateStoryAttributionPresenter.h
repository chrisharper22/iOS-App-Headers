//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGPrivateStoryAttributionPresenterDelegate;

@interface IGPrivateStoryAttributionPresenter : NSObject
{
    IGUserSession *_userSession;
    id <IGPrivateStoryAttributionPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPrivateStoryAttributionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentAlertForUser:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

