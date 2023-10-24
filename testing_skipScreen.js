







        window.nextbutton_no_location = document.getElementById("id-08d70945");
        window.nextbutton_preferred_cities = document.getElementById("button-c790ac49");


        nextbutton_no_location.setAttribute("onclick",
        "skip_postcodeFunction('id-a05ff375')"); //send ID of the text field in location screen as input
    nextbutton_preferred_cities.setAttribute("onclick",
        "skip_postcodeFunction('id-a05ff375')"); //send ID of the text field in location screen as input



        window.skip_postcodeFunction = function(location_city) {

            let signup_text_perm = document.getElementById("text-block-id-1bec64a7"); //perm text
            let signup_text_temp = document.getElementById("text-block-rich-text-40f9c1bc"); //temp text
        
            /*When a candidate is living in a big city: route candidate to postcode screen ELSE route directly to sign up screen*/
            let city = document.getElementById(location_city).value;
        
            let postcode_cities = ["berlin",
                "hamburg",
                "münchen",
                "köln",
                "frankfurt",
                "düsseldorf",
                "stuttgart",
                "leipzig",
                "bremen",
                "essen",
                "hannover",
                "nürnberg",
                "dresden",
                "dortmund",
                "duisburg",
                "wuppertal",
                "neustadt",
                "bochum",
                "bielefeld",
                "neuhof",
                "kiel",
                "bonn"];
        
            if (postcode_cities.includes(city.toLowerCase())) {
                skip_postcode = "false";
            }
        
            console.log("skip_postcode value = ", skip_postcode);
            console.log(typeof(skip_postcode));
        
            if (skip_postcode == "false") {
                heyflow[soft_reg_flow_id].navigation.navigate('go', 'id-9739b5af'); //postcode screen
                console.log("go to postcode");
            } else {
                if (preference_contract === "permanent" || preference_contract === "apprentice") {
                    signup_text_temp.parentNode.setAttribute("style", "display:none");
                    heyflow[soft_reg_flow_id].navigation.navigate('go', 'id-8b40ed96'); //perm carousel
                    console.log("go to sign up");
                } else {
                    signup_text_perm.setAttribute("style", "display:none");
                    signup_text_temp.parentNode.setAttribute("style", "padding-top:15px");
                    heyflow[soft_reg_flow_id].navigation.navigate('go', 'id-108fc602'); //temp carousel
                }
        
            }
        
        }




job_position1 =   formData.job_position;
address_city_germany1 = formData.address_city_germany;
preference_city1 = formData.preference_city1;
shared_preference_contract1

formData.job_position
formData.address_city_germany
formData.preference_city1
formData.shared_preference_place

console.log('job_position', formData.job_position);
console.log('address_city_germany', formData.address_city_germany);
console.log('ormData.preference_city1', formData.preference_city1);
console.log('shared_preference_plac', gender);
console.log('shared_preference_plac', emailAddress);
console.log('shared_preference_plac', lastName);
console.log('shared_preference_plac', output_preference_city1);

