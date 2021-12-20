//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBWebImageView.h"

#import "FBWebImageViewListener-Protocol.h"

@class BKImageComponentSpecifier, NSString;

@interface BKImageComponentView : FBWebImageView <FBWebImageViewListener>
{
    BKImageComponentSpecifier *_componentSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BKImageComponentSpecifier *componentSpecifier; // @synthesize componentSpecifier=_componentSpecifier;
- (id)imageSpecifierForCurrentTraitCollection;
- (void)startDownload;
- (void)cancelDownload;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
