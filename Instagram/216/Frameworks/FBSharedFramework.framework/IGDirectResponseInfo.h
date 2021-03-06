//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGCanvasDocument, IGLeadGenFormViewModel, NSArray, NSString, UIColor;

@interface IGDirectResponseInfo : NSObject <NSCoding, NSCopying>
{
    _Bool _forceOverlay;
    NSString *_actionText;
    NSArray *_secondaryActionTextList;
    NSString *_actionName;
    NSArray *_iosLinks;
    IGCanvasDocument *_canvasDocument;
    IGLeadGenFormViewModel *_leadForm;
    UIColor *_actionButtonBackgroundColor;
    NSString *_overlayText;
    NSString *_overlayTitle;
    NSString *_overlaySubtitle;
    NSArray *_storeLocations;
    double _storeMapZoomLevel;
    NSArray *_adMetadataItems;
}

+ (_Bool)hasDirectResponseInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *adMetadataItems; // @synthesize adMetadataItems=_adMetadataItems;
@property(readonly, nonatomic) double storeMapZoomLevel; // @synthesize storeMapZoomLevel=_storeMapZoomLevel;
@property(readonly, copy, nonatomic) NSArray *storeLocations; // @synthesize storeLocations=_storeLocations;
@property(readonly, copy, nonatomic) NSString *overlaySubtitle; // @synthesize overlaySubtitle=_overlaySubtitle;
@property(readonly, copy, nonatomic) NSString *overlayTitle; // @synthesize overlayTitle=_overlayTitle;
@property(readonly, copy, nonatomic) NSString *overlayText; // @synthesize overlayText=_overlayText;
@property(readonly, nonatomic) _Bool forceOverlay; // @synthesize forceOverlay=_forceOverlay;
@property(readonly, copy, nonatomic) UIColor *actionButtonBackgroundColor; // @synthesize actionButtonBackgroundColor=_actionButtonBackgroundColor;
@property(readonly, nonatomic) IGLeadGenFormViewModel *leadForm; // @synthesize leadForm=_leadForm;
@property(readonly, nonatomic) IGCanvasDocument *canvasDocument; // @synthesize canvasDocument=_canvasDocument;
@property(readonly, nonatomic) NSArray *iosLinks; // @synthesize iosLinks=_iosLinks;
@property(readonly, copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(readonly, copy, nonatomic) NSArray *secondaryActionTextList; // @synthesize secondaryActionTextList=_secondaryActionTextList;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
- (unsigned long long)hash;
- (_Bool)_isEqualToDirectResponseInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_felixIOSLinkForDestination:(id)arg1;
- (_Bool)containsDeepLinkURL:(id)arg1;
- (_Bool)updateLeadForm:(id)arg1;
- (_Bool)updateCanvasDocument:(id)arg1;
- (_Bool)containsClickToDirectLink;
- (_Bool)containsProfileVisitLink;
- (_Bool)containsCanvasLink;
- (_Bool)containsAppStoreLink;
- (_Bool)containsNonWebLinks;
- (_Bool)supportsCTA;
- (id)initWithDictionary:(id)arg1 objectStores:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

