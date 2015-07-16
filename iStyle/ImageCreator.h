//
//  ImageCreator.h
//  iStyle
//
//  Created by Bipo Tsai on 7/16/15.
//  Copyright (c) 2015 Bipo Tsai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImageCreator : NSObject

-(UIImage *) getImageFromURL:(NSString *)fileURL;
-(void) saveImage:(UIImage *)image withFileName:(NSString *)imageName ofType:(NSString *)extension inDirectory:(NSString *)directoryPath;
-(UIImage *) loadImage:(NSString *)fileName ofType:(NSString *)extension inDirectory:(NSString *)directoryPat;

-(void) createImage:(NSString *)webUrl withFileName:(NSString *)imageName ofType:(NSString *)extension;

@end
