//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGSponsoredStoryCaptionTextLinkHandlerDelegate;

@interface IGSponsoredStoryCaptionTextLinkHandler : NSObject
{
    IGUserSession *_userSession;
    id <IGSponsoredStoryCaptionTextLinkHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSponsoredStoryCaptionTextLinkHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCaptionLinkTapWithURL:(id)arg1 captionModel:(id)arg2 gestureRecognizer:(id)arg3 inView:(id)arg4 scrollEnabled:(_Bool)arg5;
- (id)initWithUserSession:(id)arg1;

@end

