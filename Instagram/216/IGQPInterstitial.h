//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGQPTemplateModelProtocol-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol IGQPActionHandlerProtocol;

@interface IGQPInterstitial : NSObject <IGQPTemplateModelProtocol>
{
    _Bool _dismissible;
    NSString *_title;
    NSString *_content;
    NSString *_socialContextText;
    NSString *_surfaceID;
    NSString *_promotionID;
    NSString *_primaryActionTitle;
    NSString *_footerText;
    NSURL *_footerURL;
    NSURL *_primaryActionURL;
    id <IGQPActionHandlerProtocol> _primaryActionHandler;
    NSString *_secondaryActionTitle;
    NSURL *_secondaryActionURL;
    id <IGQPActionHandlerProtocol> _secondaryActionHandler;
    NSString *_templateName;
    NSArray *_socialContextImages;
    NSURL *_imageURL;
    NSURL *_darkModeImageURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dismissible; // @synthesize dismissible=_dismissible;
@property(readonly, nonatomic) NSURL *darkModeImageURL; // @synthesize darkModeImageURL=_darkModeImageURL;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSArray *socialContextImages; // @synthesize socialContextImages=_socialContextImages;
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(readonly, nonatomic) id <IGQPActionHandlerProtocol> secondaryActionHandler; // @synthesize secondaryActionHandler=_secondaryActionHandler;
@property(readonly, nonatomic) NSURL *secondaryActionURL; // @synthesize secondaryActionURL=_secondaryActionURL;
@property(readonly, copy, nonatomic) NSString *secondaryActionTitle; // @synthesize secondaryActionTitle=_secondaryActionTitle;
@property(readonly, nonatomic) id <IGQPActionHandlerProtocol> primaryActionHandler; // @synthesize primaryActionHandler=_primaryActionHandler;
@property(readonly, nonatomic) NSURL *primaryActionURL; // @synthesize primaryActionURL=_primaryActionURL;
@property(readonly, nonatomic) NSURL *footerURL; // @synthesize footerURL=_footerURL;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *primaryActionTitle; // @synthesize primaryActionTitle=_primaryActionTitle;
@property(readonly, copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(readonly, copy, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
@property(readonly, copy, nonatomic) NSString *socialContextText; // @synthesize socialContextText=_socialContextText;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 content:(id)arg2 socialContextText:(id)arg3 surfaceID:(id)arg4 promotionID:(id)arg5 primaryActionTitle:(id)arg6 footerText:(id)arg7 footerURL:(id)arg8 primaryActionURL:(id)arg9 primaryActionHandler:(id)arg10 secondaryActionTitle:(id)arg11 secondaryActionURL:(id)arg12 secondaryActionHandler:(id)arg13 templateName:(id)arg14 imageURL:(id)arg15 darkModeImageURL:(id)arg16 socialContextImages:(id)arg17 dismissible:(_Bool)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
